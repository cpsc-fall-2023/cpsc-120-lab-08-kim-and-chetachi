// Elliot Kim
// Yolo@csu.fullerton.edu
// @YolotheDeveloper
// Partners: @chetachiihetu

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double numb = std::stod(arguments.size()) - 1;
  double total{0};
  for (int i = 1; i < numb + 1; ++i) {
    double add = std::stod(arguments[i]);
    total += add;
  }
  double average{total / numb};
  std::cout << "average = " << average << '\n';
  return 0;
}
