/*******************************************************************************
Mapas (Diccionarios)   <map> 

Cuando queremos buscar un tema en un libro, normalmente nos vamos al indice
tematico y ahí buscamos el tema (llave), y nos dice en que pagina aparece dicho
tema (valor). 

Hay ocaciones que necesitamos modelar un comportamiento similar en un programa, 
en ese caso podemos usar la estructura <map>, es decir vamos a almacenar los 
valores en la estructura usando una (llave) en lugar de un indice como 
normalmente usamos en los arreglos.

La operación de inserción y búsqueda de datos en la estructura tiene complejidad
O( lg n ).

Nota: Los datos introducidos en el mapa SE ORDENAN con base en la llave

#include <map>

map <int, int> m1;		// la llave es un entero y el valor es un entero
map <string, int> m2;	// la llave es una cadena y el valor es un entero
map <int, string> m3;	// la llave es un entero y el valor es una cadena

m1[2] = 71;				// para introducir valores en el mapa
m1[3] = 556;			// 	mapa[ llave ] = valor;
m1[140] = 19;
if ( m1.find(4) == m1.end() )		// verificar si una  llave
	cout << "Valor no encontrado";	// existe en el mapa

m2["Pablito"] = 100;	
m2["Juanito"] = 120;
cout << m2["Juanito"];	// Nos regresa el valor que tenemos almacenado en la 
						// llave "Juanito", es decir 120

m3[20] = "Oaxaca";
m3[1] = "Aguascalientes";
map <int, string>::iterator it;	// si queremos recorrer todo el mapa usamos
								// un  iterator
for ( it=m3.begin(); it!=m3.end(); i++ )
	cout << (*it).first << " " << (*it).second << endl;		// (*it).first   llave
															// (*it).second  valor
// 1 Aguascalientes
// 20 Oaxaca

Ej. Dada una lista de nombres repetidos, queremos contar cauntas veces aparece 
	cada nombre, y mostrarla ordenada.
Daniel 			---> Daniel 2
Pedro 				 Lucas 1
Daniel 				 Pedro 1
Lucas 				 Valeria 1
Valeria

Problemas:
	https://omegaup.com/arena/problem/Freddy-y-el-CR/
	https://omegaup.com/arena/problem/COMI_Traductor/
*******************************************************************************/
#include <iostream>
#include <map>

using namespace std;

int main()
{
	string nombre;
	map <string, int> nombres;
	map <string, int>::iterator it;
	
	while( cin>>nombre )
		nombres[ nombre ]++;
	for( it=nombres.begin(); it!=nombres.end(); it++ )
		cout << (*it).first << " " << (*it).second << endl;
	return 0; 
}
