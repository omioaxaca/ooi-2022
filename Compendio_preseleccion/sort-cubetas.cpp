/******************************************************************************* 
Ordenamiento por cubetas

Cuando tenemos un conjunto de datos grande (>100000), pero el numero de valores 
posibles es pequeño (<1000), podemos usar un ordenamiento por cubetas, en este 
se usa una cubeta para meter al valor cada vez que este aparece.

Ej. Hemos lanzado un dado  n  veces, y hemos guardado los valores que salieron, 
	ahora queremos visualizarlos ordenados.
	10
	1 2 5 6 3 4 1 2 2 3    --->   1 1 2 2 2 3 3 4 5 6

Creamos una cubeta por cada valor y metemos en ella el numero cada vez que este 
aparece, al final vaciamos las cubetas para generar la salida.

veces 	[2][3][2][1][1][1]
cubeta 	 1  2  3  4  5  6

Hay 2 numeros 1, 3 numeros 2, 2 numeros 3, etc...

Este algoritmo tiene una complejidad  O(n)  , es decir que si n = 1000000
tardaria 1000000 de pasos realizar la tarea.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	int n, a, i;
	int dados[7] = {0};	// inicializamos las cubetas a 0
	
	cin >> n;
	while( n-- )
	{
		cin >> a;		// leemos el numero que salio en el dado
		dados[ a ]++;	// metemos en la cubeta al numero
	}
	for (i=1; i<=6; i++)
	{
		while( dados[i]-- )		// removemos uno a uno los elementos de la cubeta
			cout << i << " ";	// y los imprimimos
	}
}
