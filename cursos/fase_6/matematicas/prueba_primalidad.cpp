// Se conoce como prueba de primalidad a la accion de comprobar si un numero es primo o no.
#include <iostream>
#include <cmath>

using namespace std;

// Implementation basica.
// Contar la cantidad de divisores y si tiene 2, entonces decir que es primo.
// O(n)
bool esPrimo_Implementacion1(int n) {
  int contadorDivisores = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) {
      contadorDivisores++;
    }
  }
  if (contadorDivisores == 2) {
    return true;
  }
  return false;
}

// Implementation basica.
// Revisar todos los numero entre 1 y n, exclusive para tratar
// de encontrar algun numero que sea divisor de n.
// O(n)
bool esPrimo_Implementacion2(int n) {
  for (int i = 2; i < n; ++i) {
    // si encontramos algun numero que divida a n, entonces
    // n no es primo.
    if (n % i == 0) {
      return false;
    }
  }
  // si no encontramos ningun divisor para n, entonces es primo.
  return true;
}

// Implementacion rapida (recomendada).
// Basado en fundamentos matematicos, sabemos que si existe un divisor
// para n, este debe encontrarse en el rango [2, sqrt(n)].
// O(sqrt(n))
bool esPrimo(int n) {
  // Si n es menor o igual que 1, entonces no es primo.
  if (n <= 1) {
    return false;
  }
  // Si n es 2, entonces es primo
  if (n == 2) {
    return true;
  }
  // si el numero es par y no es 2, entonces no es primo.
  if (n % 2 == 0) {
    return false;
  }

  // Revisar todos los numeros impares hasta el limite para tratar de encontrar un divisor.
  int limite = sqrt(n);
  for (int i = 3; i <= limite; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}


int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  cout << "El numero " << n << " ";
  if (esPrimo(n)) {
    cout << "SI";
  }
  else {
    cout << "NO";
  }
  cout << "es primo.\n";

  return 0;
}