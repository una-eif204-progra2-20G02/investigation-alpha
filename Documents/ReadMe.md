# Resumen

>   Se establece el principio de Principio de Inversión de Dependencia, mediante
>   dos ejemplos, en una se ilustra el método de error común y en el otro se
>   establece la clase Interfase para procurar solventar el error, se nota la
>   necesidad de aplica el principio para hacer métodos en forma más clara que
>   abarquen más aplicación con menos código, y a la vez que sean reutilizables,
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

# Ejemplo

# Error

>   Empecemos con estas dos clases: la primera la clase Botón, la cual recibe un
>   mensaje presionar () que determina, si el usuario lo ha presionado o no, y
>   una clase Lampara, la cual recibe los mensajes: encender (),y apagar ().

# Inconvenientes con este diseño

>   Botón depende directamente en Lampara: Si Lampara cambia, Botón cambiará
>   también.

>   Botón no es reusable: No podrías usar presionar () para encender una
>   Lavadora, por ejemplo.

>   **Este diseño es una violación al principio de Inversión de Dependencias,
>   que se define: La aplicación no ha sido separada de la implementación de
>   bajo nivel.**

>   La aplicación es la abstracción subyacente de la aplicación, la verdadera
>   esencia del sistema, su propósito. En este caso sería la detección de los
>   gestos encendido y apagado, no importa cómo lo implementemos, este es el
>   propósito. Como podemos ver tenemos una instancia de Lampara dentro de
>   Botón.

# Las abstracciones no han sido separadas de los detalles

>   Botón "conoce" como: encender () y apagar (), la Lampara; por ende es una
>   abstracción que depende: de los detalles de Lampara.

>   La política de alto nivel automáticamente depende de los módulos de bajo
>   nivel, las abstracciones automáticamente dependen en los detalles.

>   El propósito de la aplicación es la detección de los gestos de encendido y
>   apagado, en este caso esto depende de conocer los detalles de Lampara, lo
>   cual automáticamente obliga a las abstracciones a conocer los detalles.

# Ejemplo

# Solución

>   Creemos una capa intermedia en donde definiremos una interfaz abstracta
>   asociada a Botón e implementada por cualquier clase como Lampara.

# De este modo

>   Botón depende únicamente de abstracciones, puede ser reusado en varias
>   clases que implementen Conmutable. Por ejemplo, Lavadora o Ventilador

# Cambios en Lampara no afectarán a Botón.

>   ¡Las dependencias han sido invertidas! ahora Lampara tiene que adaptarse a
>   la interfaz definida por Botón. Lo cual tiene sentido, ya que la idea
>   fundamental es que lo más importante no dependa de lo menos importante.

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
>   :<http://blog.koalite.com/2015/04/la-inversion-de-dependencias-no-es->[solo-lo-que-tu-piensas/](http://blog.koalite.com/2015/04/la-inversion-de-dependencias-no-es-solo-lo-que-tu-piensas/)

>   Gabriella's Journey. (6 de diciembre de 2017). DIP: The Dependency-Inversion
>   Principle. Recuperado de:
>   [the-dependency-inversion-](https://medium.com/@gabriellamedas/dip-the-dependency-inversion-)[principle-dbe0f784f3aa](https://medium.com/%40gabriellamedas/dip-the-dependency-inversion-principle-dbe0f784f3aa)

>   Robert C. Martin, (25 de octubre de 2002), Agile Software Development,
>   Principles, Patterns and Practices, Upper Saddle River, New Jersey, Pearson
>   Education, Recuperado de:
>   [http://stgtud.github.io/sedc/Lecture/ws13-14/3.5-DIP.html\#mode=document](%20http://stgtud.github.io/sedc/Lecture/ws13-14/3.5-DIP.html#mode=document)
