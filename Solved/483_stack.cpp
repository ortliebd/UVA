#include <iostream>
#include <stack>

using namespace std;

typedef stack<char> sc;

int main (int argc, char **argv) {
  char input;
  sc word;
  
  while (cin.peek() != EOF) {
    scanf ("%c", &input);
    if (input > 32) {
      word.push(input);
    } else {
      while (!word.empty () ) {
	cout << word.top ();
	word.pop ();
      }
      cout << input;
    }
  }
    
  return 0;
}
