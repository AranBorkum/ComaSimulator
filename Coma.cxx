// -----------------------------
// COMA SIMULATOR version 0.0.1
// Authors: A. Borkum, M. Nirkko
// Updated: 21 Jan 2019
// -----------------------------
#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  srand(time(NULL));
  int i = 0;
  int d = rand() % 10 + 1;
  char input[100];
  
  while(i<d) {
    std::cout << "You are in a coma." << std::endl;
    std::cout << "What would you like to do? ";
    std::cin.getline(input,sizeof(input));
    std::cout << "I'm sorry. You can't " << input << "." << std::endl;
    i++;
  }
  
  std::cout << "You can't even. You die after " << i << " attempts." << std::endl;
  system("gio open youDied.jpg");
  
  return 0;
  
}
