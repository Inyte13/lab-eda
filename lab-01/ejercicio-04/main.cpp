#include <iostream>

enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

void tipoDeDia(DiaSemana dia) {
  if (LUNES <= dia && dia <= VIERNES) {
    std::cout << "Es dia laborable\n";
  } else {
    std::cout << "Es fin de semana\n";
  }
}

int main() {
  tipoDeDia(LUNES);
  tipoDeDia(SABADO);
  tipoDeDia(MIERCOLES);
  return 0;
}