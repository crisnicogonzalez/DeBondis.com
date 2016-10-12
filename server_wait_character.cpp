#include "server_wait_character.h"
#include <iostream> //cout
#include <string>

using std::string;
using std::cin;



WaitCharacter::WaitCharacter(Server& serverRef):server(serverRef){}
WaitCharacter::~WaitCharacter(){}

void WaitCharacter::run(){
  std::cout << "WaitCharacter::run()" << std::endl;
  string input_line;
  string character("q");
  getline(cin, input_line);
  while(character.compare(input_line) != 0){
    getline(cin, input_line);
    std::cout << "input_line:" <<input_line<< std::endl;
  }
  server.close();
}

void WaitCharacter::operator()() {
  this->run();
}
