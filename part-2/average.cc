// Kaitlyn Jao
// kaitlynjao@csu.fullerton.edu
// @k8iekitkat
// Partners: @Soulwisdom98

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return -1;
  }

  int count = 0;
  double average = 0;

  for(const string &input : arguments) {
    if(count != 0){
    average += std::stod(input);
    }
    count++;
  }
  double ave = (average/ (argc - 1));

  std::cout << "average = " << ave;

  return 0;
}
