#include <iostream>
#include <iomanip>
#include <cstdlib>

//int next_collatz(int);
int next_collatz(int k) {
  return k % 2 == 0 ? (k / 2) : 3 * k + 1;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: "<< argv[0] << " <limit>" << std::endl;
    return 1;
  }
  int n = atoi(argv[1]);
  while (n != 4) {
    std::cout << std::setw(5) << n;
    // same as C      ==> printf("%5d", n);
    // same as Python ==> print(f'{n:5}') 
    n = next_collatz(n);
  }
  std::cout << std::setw(5) << 4;
  std::cout << std::setw(5) << 2;
  std::cout << std::setw(5) << 1 << std::endl;
  return 0;
}

