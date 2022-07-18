// https://omegaup.com/arena/problem/caracteres_subcadenas/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Implementacion de busqueda binaria para regresar el primer elemento
// mayor o igual al buscado dentro de la lista ordenada.
// Regresa -1 si dicho valor no existe.
int lower_bound(std::vector<int>& lista, int valorBuscado) {
  int inicio = 0;
  int fin = lista.size() - 1;
  while (inicio < fin) {
    int mitad = inicio + (fin - inicio) / 2;
    if (lista[mitad] >= valorBuscado) {
      fin = mitad;
    }
    else {
      inicio = mitad + 1;
    }
  }
  // Verificar que el valor encontrado cumple las condiciones de la busqueda,
  // de lo contrario no se encontro ningun valor valido y debemos regresar -1.
  if (lista[inicio] >= valorBuscado) {
    return lista[inicio];
  }
  return -1;
}

int main() {
  string palabra;
  cin >> palabra;

  // Guardar todos los indices en los que se encuentra cada caracter contenido en la palabra.
  // Nota que esta garantizado que estos pueden incluit el alfabeto ingles (mayusculas y minusculas),
  // asi como los numeros.
  // Para esto usamos un vector, en donde cada casilla contiene una lista de indices.
  // Cada indice del vector representa el valor decimal de cada caracter de acuerdo al codigo ASCII.
  // Por ejemplo, la letra 'a' equivale al valor decimal de 97, entonces el indice 97 representa la lista de posiciones
  // en los que se encuentra la letra 'a' en la palabra original.
  // Nota que el vector contiene espacio suficiente para almacenar todos los valores alfanumericos.
  std::vector<vector<int> > memoria(128);

  for (int posicion = 0; posicion < palabra.length(); ++posicion) {
    char letra = palabra[posicion];
    int valorDecimal = letra; // De forma implicita extrae el valor decimal de la letra.
    // Inserta la posicion de esta letra en su respectiva lista.
    memoria[valorDecimal].push_back(posicion);
  }

  // Leer preguntas
  int numPreguntas;
  cin >> numPreguntas;
  while (numPreguntas--) {
    char letra;
    int inicio, fin;
    int longitud;
    cin >> letra >> inicio >> longitud;

    // Obtener la lista de posicions correspondiente a esta letra.
    // Nota que se obtiene el valor por referencia para evitar copias innecesarias del vector.
    vector<int>& listaPosiciones = memoria[letra];

    // Si no existe ninguna ocurrencia de la letra en toda la palabra, entonces descartar.
    if (listaPosiciones.size() == 0) {
      cout << "0" << endl;
      continue;
    }

    // Utilizar busqueda binaria para determinar si alguna de las posiciones donde se encuentra
    // el caracter esta dentro del rango de la pregunta.
    // En concreto, utilizar lower_bound para identificar el primer valor de la posicion mayor o igual
    // al inicio del rango de busqueda. Si dicha posicion existe y es menor al fin del rango, entonces
    // concluimos que dicho caracter se encuentra en el rango de busqueda.
    int indiceLetra = lower_bound(listaPosiciones, inicio);
    if (indiceLetra != -1) {
      // Se encontro una ocurrencia de la letra despues del inicio del rango. Ahora determinar si se
      // encuentra en el rango de busqueda.
      if (indiceLetra < inicio + longitud) {
        cout << "1" << endl;
      }
      else {
        cout << "0" << endl;
      }
    }
    else {
      // No se encontro el valor.
      cout << "0" << endl;
    }
  }

  return 0;
}