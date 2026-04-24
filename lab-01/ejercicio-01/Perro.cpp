#include <iostream>
using namespace std;
#include "Animal.cpp"

class Perro : public Animal {
  public:
    void dormirSonido() {
      cout << "Zzz..." << "\n";
    }
    void ladrar() {
      cout << "¡Guau!" << "\n";
    }
};