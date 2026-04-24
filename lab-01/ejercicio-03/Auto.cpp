#include <string>
using namespace std;

class Auto {
  public:
    string modelo;
    int anio;
    
    Auto() {
      modelo = "Desconocido";
      anio = 0;
    }
    Auto(string newModelo, int newAnio) {
      modelo = newModelo;
      anio = newAnio;
    }
};