# APUNTADORES Y PASO DE PARÁMETROS POR VALOR Y POR REFERENCIA
## Problemario 5 - Programacion 1

 1.  En uno de los capítulos de la serie “The Big Bang Theory” se presentó una versión extendida del juego “Piedra, Papel y Tijeras”. En esta nueva versión se consideran 5 elementos: Rock, Paper, Scissors, Lizard y Spock; los cuales están relacionados de la siguiente forma:
 
<table align="center">
<thead>
  <tr>
    <th colspan="2">Relacion entre elementos</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>Scissors cuts Paper</td>
    <td>Tijeras cortan Papel</td>
  </tr>
  <tr>
    <td>Paper covers Rock</td>
    <td>Papel cubre Piedra</td>
  </tr>
  <tr>
    <td>Rock crushes Lizard</td>
    <td>Piedra aplasta Lagartos</td>
  </tr>
  <tr>
    <td>Lizard poisons Spock</td>
    <td>Lagarto envenena Spock</td>
  </tr>
  <tr>
    <td>Spock smashes Scissors</td>
    <td>Spock rompe Tijeras</td>
  </tr>
  <tr>
    <td>Scissors decapitates Lizard</td>
    <td>Tijeras decapitan Lagarto</td>
  </tr>
  <tr>
    <td>Lizard eats Paper</td>
    <td>Lagarto come Papel</td>
  </tr>
  <tr>
    <td>Paper disproves Spock</td>
    <td>Papel refuta Spock</td>
  </tr>
  <tr>
    <td>Spock vaporizes Rock</td>
    <td>Spock vaporiza Piedra</td>
  </tr>
  <tr>
    <td>Rock crushes Scissors</td>
    <td>Piedra aplasta Tijeras</td>
  </tr>
</tbody>
</table>

Escriba un programa que permita a un usuario jugar contra la computadora, tomando en cuenta las siguientes consideraciones: 

 - La elección del elemento de la computadora se debe generar aleatoriamente, mientras que el usuario debe proporcionar el elemento de su elección.
	- Nota: Muestre un menú al usuario para ayudarlo a elegir entre los cinco elementos.
 - El juego debe terminar cuando uno de los dos jugadores, acumula 3 puntos.
 - Por cada iteración el juego debe mostrar:
	- La relación entre los elementos.
	- La frase: Punto para [Computadora/Usuario].
	- El puntaje actual. 
 - Al final del juego se imprime quien fue el ganador, si la computadora o el usuario.
 - Utilice función que reciba dos elementos elegidos e imprima la relación entre ellos.

 3. Escriba un programa que lea una fecha (día/mes/a?o) e invoque a una función que reciba los tres datos como parámetros y los modifique para que estos almacenen la fecha siguiente. Esta función debe apoyarse en otra que compruebe si la fecha pasada por parámetro es correcta o no. Imprima en el main la nueva fecha. Considere a?os bisiestos.
 
 4. Escribir un programa que simule el procedimiento de una maquita cafetera. El programa, en un inicio debe solicitar la capacidad máxima de la cafetera (mililitros) y a continuación mostrar el siguiente menú:
	-  Llenar cafetera: Para llenar la cafetera implemente una función que, a partir de la capacidad actual de la cafetera y la capacidad máxima, calcule la cantidad de mililitros faltantes. Una vez calculado, debe imprimir cuantos mililitros se agregaron y modificar la variable que controla la capacidad actual.
	- Vaciar cafetera: La función deberá establecer la capacidad actual de la cafetera en 0.
	- Servir vaso: La función deberá mostrar la impresión “Se ha servido un vaso de 150 ml” y modificar la variable que controla la capacidad actual. Si no hay suficiente café para servir un vaso, el método debe informar que no fue posible atender la solicitud.
	- Salir
	Notas:
	 - Cuando inicia el programa, la capacidad actual de la cafetera es de 0 mililitros, las variables que controlan la capacidad actual y máxima deben declararse dentro del método principal.
	 - El tipo de retorno de las funciones implementadas debe ser void.
	 -  Mostrar constantemente la capacidad actual y capacidad máxima de la cafetera.
