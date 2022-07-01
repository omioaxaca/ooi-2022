/*
Nos van a dar un conjunto de coordenadas (x,y), y queremos ordenarlas 
1) primero en orden ascendente con base en el eje de las x, 
2) despues con base en el eje de las y.

Entrada
4
1 3
2 2
1 1
4 0

Salida
1 1
1 3
2 2
4 0

*/

#include <iostream>
#include <vector>
#include <algorithm> // sort

using namespace std;


// typedef   nos sirve para definir nuevos tipos de datos
// struct { ... }   nos sirve para agrupar varios datos en una misma variable
typedef struct {
	int x;
	int y;
} coordenada;	// a partir de este punto tenemos un nuevo tipo de datos
				// que se llama coordenada

				
// para poder usar   sort   necesitamos indicar como se comparan dos coordenadas
bool operator<(coordenada a, coordenada b)
{
	if (a.x == b.x)			// si las x son iguales usamos a y como desempate
		return a.y < b.y;
	return a.x < b.x;		// la x de a es menor a la x de b?
	// si quisieramos ordenarlas de mayor a menor cambiariamos el  <  por  >
}
// a partir de este punto C ya sabe como comparar dos coordenadas


int main()
{
	int n;
	coordenada c;			// c es de tipo coordenada
	vector <coordenada> V;	// V es un vector de coordenadas
	
	cin >> n;
	while( n-- )
	{
		cin >> c.x >> c.y;
		V.push_back( c );
	}
	sort( V.begin(), V.end() );
	for(int i=0; i<V.size(); i++)
		cout << V[i].x << " " << V[i].y << endl;
	return 0;
}
