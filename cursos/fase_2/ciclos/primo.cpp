#include <iostream>

using namespace std;

int main() {

  int num = 0;
  int ban = 0;
  cin >> num;

  for (int i = 1; i <= num; i++) {
        if (num % i == 0)
        {
            ban++;
        }
  }
  if (ban == 2)
  {
      cout << " El numero ingresado es un numero primo"<<endl;
  }
  else {
      cout <<" El numero ingreaso NO es un numero primo "<<endl;
  }

  return 0; 
}