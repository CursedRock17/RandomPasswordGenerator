#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>


void Create(){
  //Probably going to need to use a SQL to store stuff
  std::string user;
  std::string key;
  char randomChar;
  int randNumber;
  bool swapper = true;

  std::cout << "Create a Random Password" << std::endl;

  srand(time(0));

  for(int i = 0; i < 10; ++i){
    if(swapper){
      randNumber = 1 + (rand()%9);
      randomChar = randNumber + '0';
      key.push_back(randomChar);
      swapper = false;
    }
    else {
      randNumber = 1 + (rand()%89);
      randomChar = randNumber + '0';
      key.push_back(randomChar);
      swapper = true;
    }
  }
  std::cout << "The Key: " << key << std::endl;

}
