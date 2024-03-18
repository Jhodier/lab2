#include <iostream>
#include <cstdlib>

using namespace std;

int problema5() {
  int a = 12345;

  char cad[20];

  // Conversión a cadena
  itoa(a, cad, 10); // cad <-- "12345"

  cout << "\nLa cadena que representa al numero es: " << cad << endl;

  return 0;
}
