#include <iostream>
#include <cstdlib> //para usar atoi e itoa

using namespace std;

int problema4(){
  char cad[] = "123";

  int a = atoi(cad); // a <-- 123

  cout << "El numero representado por la cadena es: " << a << endl;

  char cad2[10];

  itoa(a, cad2, 10); //cad <-- "123"
  cout << "\nLa cadena que representa al numero es: " << cad2 << endl;

  return 0;
}
