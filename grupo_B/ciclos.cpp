#include <iostream>

using namespace std;

int main() {

  // i++ =>  i = i + 1

  // for(int i = 0; i < 10; i++) {
  //   cout << i << endl;
  //   if(i == 5){
  //     break;
  //   }
  // }
  cout << "hola mundo" << endl;

  // int a= 0;
  // a++;
  // cout << a << endl;
  // cout << ++a << endl;
  // cout << a << endl;

  // a--;
  // cout << a << endl;
  // cout << --a << endl;

  // int contador = 0;
  // while(contador < 10) {
  //   cout << "hola mundo" << endl;
  //   contador++;
  // }

  // i+=2 =>  i = i + 2
  for(int i = 2; i <= 10; i+=2){
    cout << i << " Es Par" << endl;
  }

  //van a leer un numero de la consola
  // me van a indicar si es un numero primo o no
  // 7 => 7 es primo
  // 4 => 4 no es primo
  return 0;
}