#include <iostream>

int main (int argc, char **argv) {
  char input;
  bool first = true;

  while (scanf("%c", &input) != EOF) {
    if (input == '"' && first == true) {
      input = '`';
      printf ("%c", input);
      first = false;
    }
    if (input == '"' && first == false) {
      input = '\'';
      first = true;
      printf("%c", input);
    }
    printf ("%c", input);
  }
  return 0;
}
