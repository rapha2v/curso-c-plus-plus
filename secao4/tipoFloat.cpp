#include <iomanip> //para invocar a funcao setprecision
#include <iostream>

int main(int argc, char *argv[]) {
  float Float = 10.23541642;
  // utilizando setprecision para aumentar a precisao do valor da variavel que e
  // mostrado
  std::cout << std::setprecision(10) << Float << std::endl;
  return 0;
}
