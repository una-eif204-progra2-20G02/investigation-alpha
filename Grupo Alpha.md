>   **Universidad Nacional (UNA) Cátedra**

>   **Programación 2**

>   ** Profesor**

>   **Maikol Guzmán Agrupo**

>   **Alpha (Sub-grupo \#1) **

>   **Informe**

>   **Sobre el Principio de Inversión de Dependencias.**

>   **Alumnos **

>   **Steve V. Madrigal**

>   **Jordán Alvares Gónzalez **

>   **Rony Chinchilla Azofeifa Periodo**

>   **Segundo Semestre Año**

>   **2020**

# Resumen

>   Se establece el principio de Principio de Inversión de Dependencia, mediante
>   dos ejemplos, en una se ilustra el método de error común y en el otro se
>   establece la clase Interfase para procurar solventar el error, se nota la
>   necesidad de aplica el principio para hacer métodos en forma más clara que
>   abarquen más aplicación con menos código, y a la ves que sean reutilizables,
>   en gran medida eso es el principio.

# La [definición](https://en.wikipedia.org/wiki/Dependency_inversion_principle)

>   Principio de inversión de dependencias, se define como:

1.  Las clases de alto nivel no deberían depender de las clases de bajo nivel.
    Ambas deberían depender de las abstracciones.

2.  Las abstracciones no deberían depender de los detalles. Los detalles
    deberían depender de las abstracciones.

# El problema

>   Cuando un módulo depende, de otro módulo; se crea una nueva instancia, que
>   se utiliza. Los problemas que esto genera:

>   Las partes más genéricas, de nuestro código (lo que llamaríamos el dominio o
>   lógica; en las aplicaciones) dependerá por todas partes de detalles
>   implementadas. No podremos reutilizarlo, ya que estará acoplado al
>   Framework, de turno que usemos, a la forma que tengamos, de persistir los
>   datos. Si cambiamos algo de eso, tendremos que rehacer también, la parte más
>   importante, de nuestro programa.

>   No quedan claras las dependencias: si las instancias se crean dentro del
>   módulo que las usa, es mucho más difícil detectar de qué depende nuestro
>   módulo, y es más difícil predecir los efectos de un cambio en uno de esos
>   módulos. También nos costará comprender, si estamos violando algunos otros
>   principios, como el de
>   [.](https://devexperto.com/principio-responsabilidad-unica)

3

>   Es muy complicado hacer pruebas: Si tu clase depende de otras y no tienes
>   forma de sustituir el comportamiento, de esas otras clases. No, puedes
>   testarla de forma aislada. Si algo en las pruebas falla, no tendrías forma
>   de saber en un primer vistazo qué clase es la culpable.

>   ¿Cómo detectar que estamos violando el Principio de inversión de
>   dependencias?

>   Cualquier instanciación de clases complejas o módulos es una violación de
>   este principio. Se sobre entiende que en cuanto no puedas probar esa clase
>   con facilidad, porque dependan del código de otra clase.

>   Tendrás que utilizar alguna de las alternativas que existen para
>   suministrarle esas dependencias. Aunque hay varias, las que más se suelen
>   utilizar son mediante constructor y mediante métodos mutad-ores (sets)
>   (funciones que lo único que hacen es asignar un valor).

>   Lo más habitual es utilizar un inyector de dependencias: un módulo que se
>   encarga de instanciar los objetos que se necesiten y pasárselos a las nuevas
>   instancias de otros objetos. Se puede hacer una inyección muy sencilla a
>   mano, o usar alguna de las muchas librerías que existen si necesitamos algo
>   más complejo.

>   Ejemplo

# Error

>   Empecemos con estas dos clases: la primera la clase Boton, la cual recibe un

>   mensaje presionar () que determina, si el usuario lo ha presionado o no, y
>   una clase Lampara, la cual recibe los mensajes: encender (),y apagar ().

![](../../../Desktop/media/af6c1b61331ce0d31e6df04cec243745.jpg)

>   \*\*Figura 1.1: \*\*UML de clases del Error al aplicar el Principio de
>   Inversión de dependencias.

>   Inconvenientes con este diseño

>   Boton depende directamente en Lampara: Si Lampara cambia, Boton cambiará
>   también.

>   Boton no es reusable: No podrías usar presionar() para encender una
>   Lavadora, por ejemplo. **Este diseño es una violación al principio de
>   Inversión de Dependencias, que se define: La aplicación no ha sido separada
>   de la implementación de bajo nivel.**

>   La aplicación es la abstracción subyacente de la aplicación, la verdadera
>   esencia del sistema, su propósito. En este caso sería la detección de los
>   gestos encendido y apagado, no importa cómo lo implementemos, este es el
>   propósito. Como podemos ver tenemos una instancia de Lampara dentro de
>   Boton.

# Las abstracciones no han sido separadas de los detalles

>   Boton "conoce" como: encender () y apagar(), la Lampara; por ende es una
>   abstracción que depende: de los detalles de Lampara.

>   La política de alto nivel automáticamente depende de los módulos de bajo
>   nivel, las abstracciones automáticamente dependen en los detalles.

5

>   El propósito de la aplicación es la detección de los gestos de encendido y
>   apagado, en este caso esto depende de conocer los detalles de Lampara, lo
>   cual automáticamente obliga a las abstracciones a conocer los detalles.

# Código el error Lampara .h

>   /\*

-   File: Lampara.h

-   Author: computer

    \*

-   Created on August 6, 2020, 9:40 AM

    \*/

>   \#ifndef LAMPARA_H \#define LAMPARA_H

>   \#include \<iostream\> //Empleo de Biblioteca ostream

>   class Lampara { //Declaracion de clase Lampara

>   public://Datos Publicos

>   Lampara();//Constructor

>   virtual \~Lampara(); //Destructor

>   void enceder();//Metodo void

>   void apagar();//Metodo void

>   private://Datos privados

>   };

>   \#endif /\* LAMPARA_H \*/

# Lampara .cpp

>   /\*

-   File: Lampara.cpp

-   Author: computer

    \*

-   Created on August 6, 2020, 9:40 AM

    \*/

>   \#include "Lampara.h"//Incluir clase Lamapara .h

>   Lampara::Lampara() {//Constructor

>   }

>   Lampara::\~Lampara() {//Destructor

>   }

>   void Lampara::enceder(){//Metodo void

>   std::cout\<\<"La lampara esta encendida"\<\<std::endl;//Salida de pantalla

>   }

>   void Lampara::apagar(){//metodo void

>   std::cout\<\<"La lampara esta apagada"\<\<std::endl;//Salida de pantallla

>   }

# Boton .h

>   /\*

-   File: Boton.h

-   Author: computer

    \*

-   Created on August 6, 2020, 9:39 AM

    \*/

>   \#ifndef BOTON_H \#define BOTON_H

7

>   \#include "Lampara.h" //Incluir Clase Lampara en .h

>   class Boton {//Declaracion de clase

>   public://Datos publicos

>   Boton();//Constructor

>   virtual \~Boton();//Destructor

>   void presionar(bool);//Metodo void

>   private://Datos privados

>   Lampara \* \_lampara;//Puntero de Lampara

>   };

>   \#endif /\* BOTON_H \*/

# Boton .cpp

>   /\*

-   File: Boton.cpp

-   Author: computer

    \*

-   Created on August 6, 2020, 9:39 AM

    \*/

>   \#include "Boton.h"//Incluir .h de la clase Boton

>   Boton::Boton() {//Constructor

>   }

>   Boton::\~Boton() {//Destructor

>   }

>   void Boton::presionar(bool s){ //Metodo void

>   if(s==true){//Prueba de vedad

>   \_lampara-\>enceder();//Llamado de un metodo

>   }

>   else if(s==false){//Prueba de verdad

>   \_lampara-\>apagar();//Puntero a un metodo

>   }

>   }

# Main .cpp

>   /\*

-   File: main.cpp

-   Author: computer

    \*

-   Created on August 6, 2020, 9:38 AM

    \*/

>   \#include "Boton.h" //Incluir Boton

>   using namespace std;//Usar std

>   /\*

>   \*

>   \*/

>   int main(int argc, char\*\* argv) {

>   Boton b;//Llamado de la clase Boton

>   b.presionar(true); //Referecia de Boton a u metodo

>   b.presionar(false); //Referenccia de Boton a un metodo

>   return 0;//Salida de 0

>   }

# Salida de programa

9

![](../../../Desktop/media/ca386cbdbb9874c6e66bc0513f7fa252.png)

>   \*\*Imagen 1.1: \*\*Salida de programa, in aplicar el Principio de Inversión
>   de Dependencias.

# Solución

>   Creemos una capa intermedia en donde definiremos una interfaz abstracta
>   asociada a Boton e implementada por cualquier clase como Lampara.

![](../../../Desktop/media/40c4a562a4a2cb029792d582d40ef733.jpg)

>   \*\*Figura 1.2: \*\*UML tomando en cuenta el Principio de Inversión de
>   Dependencias.

>   De este modo

>   Boton depende únicamente de abstracciones, puede ser reusado en varias
>   clases que implementen Conmutable. Por ejemplo, Lavadora o Ventilador

>   Cambios en Lampara no afectarán a Boton.

>   ¡Las dependencias han sido invertidas! ahora Lampara tiene que adaptarse a
>   la interfaz definida por Boton. Lo cual tiene sentido, ya que la idea
>   fundamental es que lo más importante no dependa de lo menos importante.

# Código solución Lampara .h

>   /\*

-   File: Lampara.h

-   Author: computer

    \*

-   Created on August 6, 2020, 9:58 AM

    \*/

>   \#ifndef LAMPARA_H \#define LAMPARA_H \#include \<iostream\> class Lampara {
>   public:

>   Lampara();

>   virtual \~Lampara(); private:

>   };

>   \#endif /\* LAMPARA_H \*/

# Lampara .cpp

>   /\*

-   File: Lampara.cpp

-   Author: computer

    \*

-   Created on August 6, 2020, 9:58 AM

    \*/

>   \#include "Lampara.h"

>   Lampara::Lampara() {

>   }

11

>   Lampara::\~Lampara() {

>   }

# Interfase .h

>   /\*

-   File: Interface.h

-   Author: computer

    \*

-   Created on August 6, 2020, 9:59 AM

    \*/

>   \#ifndef INTERFACE_H \#define INTERFACE_H \#include "Lampara.h"

>   class Interface: public Lampara {//Clase Interface hereda de Lampara

>   public://Declaraciones publicas

>   Interface();//Constructor

>   virtual \~Interface();//Destructor

>   void encender(); //Metodo void

>   void apagar();//Metodo void

>   private://Declaraciones privadas

>   };

>   \#endif /\* INTERFACE_H \*/

# Interfase .cpp

>   /\*

-   File: Interface.cpp

-   Author: computer

    \*

-   Created on August 6, 2020, 9:59 AM

    \*/

>   \#include "Interface.h"//Llamad del .h de la clase Inerface

>   Interface::Interface():Lampara() {//Constructor sin parmetros

>   }

>   Interface::\~Interface() {//Destructor

>   }

>   void Interface::encender(){//Metodo void

>   std::cout\<\<"La lampara esta prendida."\<\<std::endl;//Salida en pantalla.

>   }

>   void Interface::apagar(){//Metodo void

>   std::cout\<\<"La lampara esta apagada."\<\<std::endl;//Salida en pantalla

>   }

# Boton .h

>   /\*

-   File: Boton.h

-   Author: computer

    \*

-   Created on August 6, 2020, 10:03 AM

    \*/

>   \#ifndef BOTON_H \#define BOTON_H

13

>   \#include "Interface.h"//Llamado de la clase

>   class Boton {//Generarción de clase

>   public;//Metodos Publicos

>   Boton();//Constructor sin parametos.

>   virtual \~Boton(); void preionar(bool);//Destructor de clase

>   private://Metodos procvados

>   Interface \_i;//Puntero a la clase Interface

>   };

>   \#endif /\* BOTON_H \*/

# Boton .cpp

>   /\*

-   File: Boton.cpp

-   Author: computer

    \*

-   Created on August 6, 2020, 10:03 AM

    \*/

>   \#include "Boton.h"//Incluir el .h de Boton

>   Boton::Boton() {//Constructor sin parámetros

>   }

>   Boton::\~Boton() {//Destructor

>   }

>   void Boton::preionar(bool s){ //Metodo void

>   if(s==true){//Pueba de verdad

>   \_i.encender();//Salida

>   }

>   else if(s==false){//Prueba de verdad

>   \_i.apagar();/Salida

>   }

>   }

# Main .cpp

>   /\*

-   File: main.cpp

-   Author: computer

    \*

-   Created on August 6, 2020, 9:57 AM

    \*/

>   \#include "Boton.h"//Incluye Boton .h

>   using namespace std;//incluye std

>   /\*

>   \*

>   \*/

>   int main(int argc, char\*\* argv) {

>   Boton \_b;//Referencia a l clase Boton

>   \_b.preionar(true);//Llamado de dato o metodo

>   \_b.preionar(false); //Llaamado de dato o metodo

>   return 0;//Retorna 0

>   }

# Salida del programa

15

![](../../../Desktop/media/c44d322251ca997981a996a8749baf55.png)

>   \*\*Imagen 1.2: \*\*Salida de programa aplicando el Principio de Inversión
>   de Dependencias.

# Conclusiones

-   Este mecanismo nos obliga a organizar nuestro código de una manera muy
    distinta a como estamos acostumbrados, y en contra de lo que la lógica dicta
    inicialmente, pero a la

    larga compensa por la flexibilidad que otorga a la arquitectura de nuestra
    aplicación.

-   Este principio busca que desarrollemos código desacoplado, código que
    podamos reutilizar y escalar, sin complicaciones.

    -   Al aplicar DIP estamos permitiendo que las cosas que cambian más (las
        implementaciones concretas) dependan de las cosas que cambian menos (las
        abstracciones), haciendo nuestro sistema más resistente a los cambios y
        es esa la verdadera razón por la cual queremos en la medida de lo
        posible depender de abstracciones.

    -   Evitamos así que los cambios en esas partes más inestables se propaguen
        hacia el resto del sistema, ya que el resto del sistema no depende de
        ellas.

# Referencias

>   Juan María Hernandez. La inversión de dependencias no es (sólo) lo que tú
>   piensas. Recuperado de
>   [http://blog.koalite.com/2015/04/la-inversion-de-dependencias-no-es-](http://blog.koalite.com/2015/04/la-inversion-de-dependencias-no-es-solo-lo-que-tu-piensas/)[solo-lo-que-tu-piensas/](http://blog.koalite.com/2015/04/la-inversion-de-dependencias-no-es-solo-lo-que-tu-piensas/)

>   Gabriella's Journey. (6 de diciembre de 2017). DIP: The Dependency-Inversion
>   Principle.Recuperado de
>   [https://medium.com/\@gabriellamedas/dip-the-dependency-inversion-](https://medium.com/%40gabriellamedas/dip-the-dependency-inversion-principle-dbe0f784f3aa)[principle-dbe0f784f3aa](https://medium.com/%40gabriellamedas/dip-the-dependency-inversion-principle-dbe0f784f3aa)

>   Robert C. Martin, (25 de octubre de 2002), Agile Software Development,
>   Principles, Patterns and Practices, Upper Saddle River, New Jersey, Pearson
>   Education, Recuperado de: Inc
>   [http://stg-tud.github.io/sedc/Lecture/ws13-14/3.5-DIP.html\#mode=document](http://stg-tud.github.io/sedc/Lecture/ws13-14/3.5-DIP.html#mode%3Ddocument)
