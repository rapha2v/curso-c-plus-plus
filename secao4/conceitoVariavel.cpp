#include <iostream>
// adicionando essa lib no windows para adicionar acentuacao
// #include <tchar.h>

using namespace std;

int main(int argc, char *argv[]) {
  // adicionando acentuacao
  // _tsetlocale(LC_ALL, _T("portuguese"));
  int NumVidas = 5;
  int Score = 1350;
  cout << "Endereco de memoria NumVidas: " << &NumVidas << endl;
  cout << "Endereco de memoria Score: " << &Score << endl;
  cout << "Tamanho variavel NumVidas: " << sizeof(NumVidas) << " bytes" << endl;
  cout << "Tamanho variavel Score: " << sizeof(Score) << " bytes" << endl;
  cout << "\n" << endl;
  cout << "Inicio do jogo" << endl;
  cout << "******************************" << endl;
  cout << "Vidas Jogador: " << NumVidas << endl;
  cout << "Score: " << Score << endl;
  cout << "******************************" << endl;
  cout << "\n" << endl;
  NumVidas -= 3;
  Score += 1127;
  cout << "Durante do jogo" << endl;
  cout << "******************************" << endl;
  cout << "Vidas Jogador: " << NumVidas << endl;
  cout << "Score: " << Score << endl;
  cout << "******************************" << endl;

  getchar();
  return 0;
}
