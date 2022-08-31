#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> numeros(n);

  for (int& numero : numeros) {
    cin >> numero;
  }

  // Crear una cubeta para contar la cantidad de veces que visitamos cada numero.
  unordered_map<int, int> cubeta;

  int contadorPares = 0;
  for (int i = 0; i < numeros.size(); ++i) {
    // Despejar el valor de y, que es el que necesito para formar la suma de k.
    int x = numeros[i];
    int y = k - x;
    // Contar la cantidad de veces que hemos visitado a y en el pasado.
    contadorPares += cubeta[y];
    // Registrar que hemos visitado la posicion actual.
    cubeta[x]++;
  }

  cout << contadorPares << endl;

  return 0;
}