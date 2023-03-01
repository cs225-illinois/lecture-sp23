/**
 * Simple C++ lambda example.
 * 
 * @author
 *   G. Carl Evans <gcevans@illinois.edu>
 */

#include <iostream>
#include <vector>
#include "Countif.h"

bool isNegative(int num) { return (num < 0); }

class IsNegative {
public:
    bool operator() (int num) { return (num < 0); }
};

int main() {
  std::vector<int> numbers = {1, 102, 105, 4, 5, 27, 41, -7, 999};

  auto isnegl = [](int num) { return (num < 0); };
  auto isnegfp = isNegative;
  auto isnegfuctor = IsNegative();

  std::cout << "There are " << Countif(numbers.begin(), numbers.end(), isnegl) 
    << " negative numbers" << std::endl;

  int big;
  std::cout << "How big is big? ";
  std::cin >> big;

  auto isbig = [big](int num) { return (num >= big); };

  std::cout << "There are " << Countif(numbers.begin(), numbers.end(), isbig) 
    << " big numbers" << std::endl;
}