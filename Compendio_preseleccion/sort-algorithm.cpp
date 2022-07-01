/******************************************************************************* 
Ordenamiento ( sort  de la libreria  <algorithm> )

Si tenemos un conjunto de datos y necesitamos ordenarlos, podemos usar la 
función  sort  de la libreria  <algorithm> . 

int A[100];             sort( A, A+n );  // donde n es el numero de elementos
vector <int> V(100);    sort( V.begin(), V.end() );    // ascendente  1 2 3 
						sort( V.rbegin(), V.rend() );  // descendente 3 2 1
							// siempre es igual sin importar el tipo de dato del 
							// vector: int, float, string
string s="hola";		sort( s.begin(), s.end() );    // ahlo

Este algoritmo tiene una complejidad O(n lg n), es decir: 
	si n=100, tardaria 100xlg(100) = 100 x 6.64 = 664 pasos en ordenarlo.
	si n=1000, tardaria 1000xlg(1000) = 1000 x 9.96 = 9960 pasos
	si n=10000, tardaria 10000xlg(10000) = 10000 x 13.28 = 132800 pasos
debemos notar como lg(n) crece realmente lento, para n=1000000, lg(n)=19.93
Nota: En la calculadora lg(n) se calcula como log(n)/log(2).

Ej. Dado un conjunto de  n  numeros, mostrarlos en forma ordenada.
6
2 3 1 5 4 7     ------>     1 2 3 4 5 7                                       
*******************************************************************************/

#include <iostream>
#include <algorithm> // sort
#include <vector>

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	vector <int> V(n);  // vector <tipo> nombre(tamaño)
	for(i=0; i<n; i++)
		cin >> V[i];    // el vector es un arreglo (dinámico)
	sort( V.begin(), V.end() );
	for(i=0; i<n; i++)
		cout << V[i] << " ";
	return 0;
}
