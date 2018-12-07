#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <istream>

using namespace std;

int main (int argc, char **argv) {
  //memory array
  int memory[1000] = {0};
  
  //registers array
  int registers[10] = {0};
  
  //number of cases
  int cases = 0;
  
  //instruction input
  int instruction = 0;
  string temp;
  //memory current position
  int memory_position = 0;
  
  //program counter
  int pc = 0;
  
  //number of instructions executed
  int instructions_executed = 0;
  
  //splited instructions
  int first_instruction;
  int second_instruction;
  int third_instruction;

  cin >> cases;

  while (cases > 0) {
    while (getline(cin, temp, '10')) {
      instruction = atoi(temp.c_str());
      memory[memory_position++] = instruction;
      cout << instruction << " " << cases << endl;
    }
    pc = 0;
    instructions_executed = 0;
    do {
      first_instruction = memory[pc] / 100;
      second_instruction = memory[pc] / 10 % 10;
      third_instruction = memory[pc] % 10;
      instructions_executed++;
      switch (first_instruction) {
      case 2:
	registers[second_instruction] = third_instruction;
	break;
      case 3:
	registers[second_instruction] = (registers[second_instruction] + third_instruction) % 1000;
	break;
      case 4:
	registers[second_instruction] = (registers[second_instruction] * third_instruction) % 1000;
	break;
      case 5:
	registers[second_instruction] = registers[third_instruction];
	break;
      case 6:
	registers[second_instruction] = (registers[second_instruction] + registers[third_instruction]) % 1000;
	break;
      case 7:
	registers[second_instruction] = (registers[second_instruction] * registers[third_instruction]) % 1000;
	break;
      case 8:
	registers[second_instruction] = memory[registers[third_instruction]];
	break;
      case 9:
	memory[registers[third_instruction]] = registers[second_instruction];
	break;	
      case 0:
	if (third_instruction != 0) {
	  pc = registers[second_instruction] - 1;
	}
	break;
      default:
	break;
      }
      pc++;
    } while (memory[pc] != 100);
    cases--;
  }

  return 0;
}
