#include <iostream>
#include <string>

using namespace std;

#define TAMANHO_MAXIMO 101
char campo[TAMANHO_MAXIMO][TAMANHO_MAXIMO];
int n, m;

void calculaVizinhanca (int, int); //calcula minas proximas
void incrementaVizinhanca (int, int); //atualiza minas proximas

int main(int argc, char *argv[])
{
  char temp;
  int contCampo = 1;
  //entrada campo
  while (cin >> n >> m && (n != 0 && m != 0)) {
    if (contCampo > 1) cout << endl;
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
	std::ws (cin);
	temp = cin.get ();
	if (temp == '*') {
	  campo[i][j] = temp;
	} else {
	  campo[i][j] = '0';
	}
      }
    }
    //calcula campo
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
	if (campo[i][j] == '*') {
	  calculaVizinhanca (i, j);
	}
      }
    }
    //imprime campo
    cout << "Field #" << contCampo++ << ":" << endl;
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
	cout << campo[i][j];
      }
      cout << endl;
    }
  }
  
  return 0;
}

void calculaVizinhanca (int i, int j)
{
  int a = i-1;
  int b = j-1;

  while (a <= i+1) {
    while (b <= j+1) {
      if (a >=0 && b >=0 && a < n && b < m)
	incrementaVizinhanca(a, b);
      b++;
    }
    a++;
    b = j-1;
  }

}

void incrementaVizinhanca (int i, int j)
{
  if (campo[i][j] != '*') campo[i][j]++;
}
