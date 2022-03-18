#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int a = 9;
  float f = 9.90;
  double d = 8.90;
  char letra = 'A';
  string nombre = "Juan Perez +^!$#*&{[]}.";
  bool uno = true;
  bool dos = false;

  cout << a << endl;
  cout << f << endl;
  cout << d << endl;
  cout << letra << endl;
  cout << nombre << endl;
  cout << uno << endl;
  cout << dos << endl;



  float l = 10;
  float area = l * l;
  cout << area << "cm" << endl;

  cout << l / l << endl;
  cout << l + l << endl;
  cout << l - l << endl;

  float raiz = sqrt(4); // esto es para obtener la raiz cuadrada de un numero
  cout << raiz << endl;

  int potencia = pow(2,4); //optener la potencia: el promer valor es el valor a potenciar y el segundo es la potenncia
  cout << potencia << endl;

  int num;
  string caracteres;

  cout << "ingresa un valor entero" << endl;

  cin >> num;
  fflush(stdin);
  getline(cin,caracteres);

  cout << "ingresaste: " << num << endl;
  cout << "segundo ingresado: " << caracteres << endl;

  // fflush(stdin);
  

  return 0; 
}