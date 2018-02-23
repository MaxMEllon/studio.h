#include <iostream>

#define main(); int main() { Cout cout;
#define return0 ;return 0; }

class Cout {
public:
  void operator>>(std::string str) { std::cout << str; }
};
