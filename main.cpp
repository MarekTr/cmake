
#include "matplotlibcpp.h"
#include <vector>

namespace plt = matplotlibcpp;

int main() {
  std::vector<double> y = {1, 3, 2, 4};
  //plt::figure();
  plt::plot(y);
  plt::savefig("minimal.pdf");
  return 0;
}