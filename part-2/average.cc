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
    cout << "error: you must supply at least one number";
    return -1;
  }
  double size = arguments.size();

  double i = 1;
  double average = 0;

  for (i = 1; i < size; i++) {
    average += (std::stod(arguments.at(i)));
  }

  double ave = (average / (i - 1));

  cout << "average = " << ave;

  return 0;
}
