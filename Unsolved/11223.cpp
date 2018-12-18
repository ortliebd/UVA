#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv){
  int n_messages;
  char input;
  string word = {};
  int begin = 0;
  int end = 1;

  cin >> n_messages;
  cin.ignore();

  while (cin.peek() != EOF) {
    scanf ("%c", &input);
    if (begin != end) {
      cout << "Message #" << ++begin << endl;
    }
    if (input == '\n') {
      cout << endl;
      end++;
      if (begin > 0 && begin != n_messages)
	cout << endl;
    } else if (input != ' ') {
      word += input;
    }
    if (cin.peek() == ' ' || cin.peek() == '\n') {
      if (word == ".-")
	cout << "A";
      else if (word == "-...")
	cout << "B";
      else if (word == "-.-.")
	cout << "C";
      else if (word == "-..")
	cout << "D";
      else if (word == ".")
	cout << "E";
      else if (word == "..-.")
	cout << "F";
      else if (word == "--.")
	cout << "G";
      else if (word == "....")
	cout << "H";
      else if (word == "..")
	cout << "I";
      else if (word == ".---")
	cout << "J";
      else if (word == "-.-")
	cout << "K";
      else if (word == ".-..")
	cout << "L";
      else if (word == "--")
	cout << "M";
      else if (word == "-.")
	cout << "N";
      else if (word == "---")
	cout << "O";
      else if (word == ".--.")
	cout << "P";
      else if (word == "--.-")
	cout << "Q";
      else if (word == ".-.")
	cout << "R";
      else if (word == "...")
	cout << "S";
      else if (word == "-")
	cout << "T";
      else if (word == "..-")
	cout << "U";
      else if (word == "...-")
	cout << "V";
      else if (word == ".--")
	cout << "W";
      else if (word == "-..-")
	cout << "X";
      else if (word == "-.--")
	cout << "Y";
      else if (word == "--..")
	cout << "Z";
      else if (word == "-----")
	cout << "0";
      else if (word == ".----")
	cout << "1";
      else if (word == "..---")
	cout << "2";
      else if (word == "...--")
	cout << "3";
      else if (word == "....-")
	cout << "4";
      else if (word == ".....")
	cout << "5";
      else if (word == "-....")
	cout << "6";
      else if (word == "--...")
	cout << "7";
      else if (word == "---..")
	cout << "8";
      else if (word == "----.")
	cout << "9";
      else if (word == "..--..")
	cout << "?";
      else if (word == "-.-.--")
	cout << "!";
      else if (word == ".-.-.-")
	cout << ".";
      else if (word == "--..--")
	cout << ",";
      else if (word == "-....-")
	cout << "-";
      else if (word == ".----.")
	cout << "'";
      else if (word == "-..-.")
	cout << "/";
      else if (word == "-.--.")
	cout << "(";
      else if (word == "-.--.-")
	cout << ")";
      else if (word == ".-...")
	cout << "&";
      else if (word == "---...")
	cout << ":";
      else if (word == "-.-.-.")
	cout << ";";
      else if (word == "-...-")
	cout << "=";
      else if (word == ".-.-.")
	cout << "+";
      else if (word == "..--.-")
	cout << "_";
      else if (word == ".-..-.")
	cout << "\"";
      else if (word == ".--.-.")
	cout << "@";
      else {
	cin.ignore(' ');
	cout << input;
      }
      word.clear();    
    }
  }
  return 0;
}
