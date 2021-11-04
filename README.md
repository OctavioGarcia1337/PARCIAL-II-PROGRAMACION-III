# PARCIAL II - PROGRAMACIÓN III

Profesor: 😎 Matias Murgui @msmurgui 

## Integrantes ✒️

* 💪 Angelone Benjamín [BenjAngelone](https://github.com/BenjAngelone)
* 🙈 Ana Paula Apfelbaum  [anitaapfel06](https://github.com/anitaapfel06)
* 🐥 Octavio Garcia  [OctavioGarcia1337](https://github.com/OctavioGarcia1337)
# Proyecto 📝
En este proyecto se le pedía a los grupos, debido al caso de pandemia del año 2020, hacer un visualizador de datos de los casos en Argentina. Para esto se quiere poder mostrar datos ordenados y agrupados en distintas categorías. Como así también hacer un procesado simple de los datos y mostrar alguna información extra. 

## ¿Cómo se usa? ❔

1. Primero y muy importante es necesario tener bajada la base de datos que se quiere analizar y colocarla en la misma carpeta donde se encuentra el .exe del programa.
**[Link para bajar la base de datos](https://sisa.msal.gov.ar/datos/descargas/covid-19/files/Covid19Casos.zip)**
2. Luego abrir la consola para ejecutar el programa por comandos. Debe tener precaución de encontrarse en la carpeta correcta para iniciar el programa con el siguiente comando:
	* covid19.exe **[ Argumentos ]** Covid19Casos.csv
3. Como argumento se pueden introducir las siguientes instrucciones:
	* **-estad** Mostrará la información estadística.
	* **-p_casos [n]** Mostrará las n primeras provincias con más contagios ordenadas de más a  				  menos. Si n no es pasado, se mostrarán todas las provincias. (sin corchetes)
	* **-p_muertes [n]** Mostrará las n provincias con más muertes ordenadas de más a menos. Si n no es pasado, se mostrarán todas las provincias. (sin corchetes)
	* **-casos_cui [fecha]** Mostrará los datos de los casos que estuvieron en cuidados intensivos ordenados por fecha, si fecha está indicada, se mostrarán solo las fechas mayores a esta. (sin corchetes, y con el formato XXXX-XX-XX).

## Desarrollo 💻
En el desarrollo del proyecto nos encontramos con muchas dificultades, empezamos a trabajar sin siquiera saber como leer o ejecutar instrucciones por comandos para iniciar el programa, el arranque fue bastante tedioso mucha prueba y error, luego una vez que logramos sobrepasar las primeras dificultades empezamos con la función mas básica del programa, que era -estad, para sacar datos estadísticos, los cuales no fueron tan difíciles, la primera complicación llego a la hora de filtrar por rango etario de una forma optima sin consumir muchos recursos, tomamos la decisión de no complicarnos tanto e ir por una solución sencilla, usando una especie de tabla de hash, para ordenarlos en un arreglo, luego pasamos a funciones mas complejas, como el caso de -p_casos, donde la mayor dificultad fue reducir el costo de ejecución. Pensamos que no llegamos al resultado mas optimo, pero logramos reducir bastante el tiempo de ejecución, intentando armar una tabla de hash, pero la misma tenia varias colisiones, luego dudamos de usar un árbol o el método quicksort, nos decidimos por el segundo por mayor sencillez. En la función -p_muertes no tuvimos mayores complicaciones, debido a que reciclamos las técnicas que ya habíamos aplicado para el metodo anterior, pero si tuvimos complicaciones para el caso de la función -casos_edad años, donde en primera instancia habíamos interpretado mal la consigna, luego a ultimo momento nos dimos cuenta de este error y buscamos una solución lo mas sencilla y rápida posible, por lo que nos inclinamos al uso de pilas y arreglos dinámicos, debido a que eran los métodos que manejamos con mayor comodidad, pero sacrificando poco rendimiento y mucha memoria, si bien pensamos que lo ideal hubiera sido trabajar con una lista u otras estructuras. Por ultimo el metodo mas complicado, para nosotros fue -casos_cui [fecha] en el cual se nos dificultaba bastante guardar las filas, filtrarlas por los parámetros que se nos daban y a la vez intentar de que estuviera lo mas optimizado posible, en esta función nos detuvimos bastante ya que no le encontrábamos la vuelta, pasamos por intentar implementar un árbol adaptado al problema, ya que el proporcionado en clase no se ajustaba a nuestra necesidad, probamos combinar esto con listas, que nuevamente tuvimos las mismas dificultades, en este caso incluso probamos con librerías especificas además de las proporcionadas en clase. Sin embargo logramos solucionarlo volviendo a nuestra confiable estructura de pilas.
Si bien los métodos no son los mejores satisfacen la necesidad esencial.

## Herramientas 🔧
Durante el desarrollo de este proyecto se utilizo por parte de todos los integrantes del grupo: 
* IDE VSCode
* Discord
* Duckly

## Imágenes 👀
![](https://cdn.discordapp.com/attachments/751132523601461250/905647175520907264/unknown.png)![](https://cdn.discordapp.com/attachments/751132523601461250/904953715914600488/unknown.png)![](https://cdn.discordapp.com/attachments/751132523601461250/905647107388633098/unknown.png)![](https://cdn.discordapp.com/attachments/751132523601461250/905647039386361966/unknown.png)
