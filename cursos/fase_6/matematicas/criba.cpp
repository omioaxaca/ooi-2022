// Implementacion de la criba de Eratostenes.
#include <iostream>
#include <cmath>

using namespace std;

// El tamanio maximo de la criba depende de los limites del problema.
const int tamanio_criba = 1000000; // 1 millon
// Asumir que todos los numeros entre 1 y el maximo de la criba son primos.
std::vector<bool> esPrimo(tamanio_criba, true);

void llenarCriba() {
  // Marcar los primeros 2 elementos de la criba.
  esPrimo[0] = false;
  esPrimo[1] = false;
  // Recorrer todos los elementos de izquierda a derecha empezando en el primer primo conocido.
  for (int numero = 2; numero < tamanio_criba; ++numero) {
    // si encuentro un numero que es primo, entonces marco
    // todos sus multiplos como no primos.
    if (esPrimo[numero] == true) {
      for (int multiplo = numero + numero; multiplo < tamanio_criba; multiplo += numero) {
        esPrimo[multiplo] = false;
      }
    }
  }
}

int main() {
  // NOTE: Muy importante.
  // Realizar el llenado de la criba solo 1 vez al principio del programa.
  // A esto se le conoce como precalculo.
  llenarCriba();

  int n;
  cin >> n;

  cout << "El numero " << n << " ";
  if (esPrimo[n]) {
    cout << "SI";
  }
  else {
    cout << "NO";
  }
  cout << "es primo.\n";

  return 0;
}