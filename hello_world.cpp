#include <iostream>

int
main()
{
  std::cout << "Enter your name"; //Requesting a username
  std::string name;
  std::cin >> name; //Remembering a username
  std::cout << "Hello world from " << name; //Output
  return 0;
}
