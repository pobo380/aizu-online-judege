#include <iostream>

int main(void) {
  int height[10];

  for (int i = 0; i < 10; ++i) {
    std::cin >> height[i];
  }

  int tmp;
  for (int i = 0; i < 10; ++i) {
    for (int j = i+1; j < 10; ++j) {
      if (height[i] < height[j]) {
        tmp = height[j];
        height[j] = height[i];
        height[i] = tmp;
      }
    }
  }

  for (int i = 0; i < 3; ++i) {
    std::cout << height[i] << std::endl;
  }
}
