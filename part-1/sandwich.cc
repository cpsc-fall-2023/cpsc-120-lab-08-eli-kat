
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

  if (arguments.size() != 4) {
    cout << "error: you must supply three arguments";
    return -1;
  }
  string protein = arguments[1];
  string bread = arguments[2];
  string condiment = arguments[3];

  cout << "Your order:\nA " << protein << " sandwich on " << bread << " with "
       << condiment << ".\n";

  return 0;
}