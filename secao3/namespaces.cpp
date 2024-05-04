#include <iostream>

using namespace std;

namespace eixos {
int x;
int y;
int z;

} // namespace eixos

int main(int argc, char *argv[]) {
  eixos::x = 4;
  eixos::y = 5;
  eixos::z = 3;
  cout << "X: " << eixos::x << " Y: " << eixos::y << " Z: " << eixos::z << endl;
  return 0;
}
