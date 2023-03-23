#include "main.h"

void print_triangle(int size) {
  if (size <= 0) {
    _putchar('\n');
    return;
  }
  
  for (int row = 0; row < size; row++) {
    for (int col = 0; col <= row; col++) {
      _putchar('#');
    }
    _putchar('\n');
  }
}

