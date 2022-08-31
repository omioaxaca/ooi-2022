#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> numeros(n);
  for (int& numero : numeros) {
    cin >> numero;
  }

  // Crear un arreglo de sumas desde el inicio hasta cada posicion i del arreglo.
  vector<int> sumas(n, 0);
  sumas[0] = numeros[0];
  for (int i = 1; i < sumas.size(); ++i) {
    sumas[i] = sumas[i - 1] + numeros[i];
  }

  // Crear cubeta para el barrido.
  unordered_map<int, int> cubeta;
  cubeta[0] = 1; // Asumir que existe un rango cuya suma es igual a 0 (Es el equivalente a un rango vacio.).
  int contador = 0;
  for (int j = 0; j < sumas.size(); ++j) {
    // Para encontrar la suma entre un rango definimos suma(i, j) = suma(0, j) - suma(0, i - 1).
    // Estamos buscando todas las parejas de suma(0, j) y suma(0, i - 1) tal que el resultado sea k.
    // suma(0, j) - suma(0, i - 1) = k
    // Si decimos que x = suma(0, j)
    // y que y = suma(0, i - 1)
    // Entonces:
    // x - y = k
    int x = sumas[j];
    int y = x - k;
    // Verificar si en el pasado existe algun valor para y.
    contador += cubeta[y];

    // Marcar la suma actual como visitada.
    cubeta[x]++;
  }
  cout << contador << endl;


  return 0;
}