#include <iostream>
using namespace std;
#include "Vehiculo.cpp"

class Auto: public Vehiculo {
  public:
    void iniciar() {
      cout << "brrrrum, auto arrancando" << "\n";
    }
    void detener() {
      cout << "fuumm, auto deteniendose" << "\n";
    }
};