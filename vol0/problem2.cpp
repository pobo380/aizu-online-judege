#include <iostream>
#include <vector>

int main(void) {
  std::vector<long> vec;

  long a, b;
  while (!(std::cin.eof()) && std::cin >> a >> b) {
    vec.push_back(a);
    vec.push_back(b);
  }

  for (std::vector<long>::iterator it = vec.begin(); it != vec.end(); ++it) {
    long ox, oy, x, y, tmp;
    ox = x = *it;
    oy = y = *(++it);

    if (y > x) {
      tmp = y;
      y = x;
      x = tmp;
    }

    while(tmp = x % y) {
      x = y;
      y = tmp;
    }

    std::cout << y << ' ' << (ox / y) * oy << std::endl;
  }

  return 0;
}
