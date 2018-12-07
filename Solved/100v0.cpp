#include <iostream>
#include <vector>
using namespace std;

long int calculaCiclos (long int);
long int ciclosMaximo (long int, long int);

int main(int argc, char *argv[])
{
  long int i, j; //entradas

  while (cin >> i >> j) {
    if (i < j) {
      cout << i << " " << j << " " << ciclosMaximo (i, j) << "\n";
    } else {
      cout << i << " " << j << " " << ciclosMaximo (j, i) << "\n";
    }
  }
  return (0);
}

long int calculaCiclos (long int i) {
  long int contadorCiclos = 1;
  while (i != 1) {
    if (i % 2 == 0) {
      i = i/2;
    } else {
      i = i*3+1;
    }
    contadorCiclos++;
  }
  return contadorCiclos;
}

long int ciclosMaximo (long int i, long int j) {
  long int cicloAtual = 0;
  long int cicloMaximo = 0;
    
  for (int count = i; count <= j; count++) {
    cicloAtual = calculaCiclos (count);
    if (cicloAtual > cicloMaximo) {
      cicloMaximo = cicloAtual;
    }
  }
  return cicloMaximo;
}
    
