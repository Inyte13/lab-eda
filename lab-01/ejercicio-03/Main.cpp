#include <iostream>
using namespace std;
#include "Auto.cpp"

int main() {
  Auto miAuto;
  Auto miOtroAuto("Ford Ranger", 1983);
  cout << "miAuto - contructor default:" << "\n";
  cout << "Modelo: " << miAuto.modelo << "\n";
  cout << "Año: " << miAuto.anio << "\n";
  
  cout << "miOtroAuto - contructor parametrizado:" << "\n";
  cout << "Modelo: " << miOtroAuto.modelo << "\n";
  cout << "Año: " << miOtroAuto.anio << "\n";
  return 0;
}