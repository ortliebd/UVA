#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  char input;

  while (scanf ("%c", &input) != EOF) {
    switch (input) {
    case 'W':
      input = 'Q';
      break;
    case 'E':
      input = 'W';
      break;
    case 'R':
      input = 'E';
      break;
    case 'T':
      input = 'R';
      break;
    case 'Y':
      input = 'T';
      break;
    case 'U':
      input = 'Y';
      break;
    case 'I':
      input = 'U';
      break;
    case 'O':
      input = 'I';
      break;
    case 'P':
      input = 'O';
      break;
    case '[':
      input = 'P';
      break;
    case ']':
      input = '[';
      break;
    case '\\':
      input = ']';
      break;
    case 'S':
      input = 'A';
      break;
    case 'D':
      input = 'S';
      break;
    case 'F':
      input = 'D';
      break;
    case 'G':
      input = 'F';
      break;
    case 'H':
      input = 'G';
      break;
    case 'J':
      input = 'H';
      break;
    case 'K':
      input = 'J';
      break;
    case 'L':
      input = 'K';
      break;
    case ';':
      input = 'L';
      break;
    case '\'':
      input = ';';
      break;
    case 'X':
      input = 'Z';
      break;
    case 'C':
      input = 'X';
      break;
    case 'V':
      input = 'C';
      break;
    case 'B':
      input = 'V';
      break;
    case 'N':
      input = 'B';
      break;
    case 'M':
      input = 'N';
      break;
    case ',':
      input = 'M';
      break;
    case '.':
      input = ',';
      break;
    case '/':
      input = '.';
      break;
    case '1':
      input = '`';
      break;
    case '2':
      input = '1';
      break;
    case '3':
      input = '2';
      break;
    case '4':
      input = '3';
      break;
    case '5':
      input = '4';
      break;
    case '6':
      input = '5';
      break;
    case '7':
      input = '6';
      break;
    case '8':
      input = '7';
      break;
    case '9':
      input = '8';
      break;
    case '0':
      input = '9';
      break;
    case '-':
      input = '0';
      break;
    case '=':
      input = '-';
      break;
    }
    printf ("%c", input);
  }
  return 0;
}
