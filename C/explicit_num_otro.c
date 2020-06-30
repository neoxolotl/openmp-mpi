#include <stdio.h>
int main() {
  int x = 1;
  int y = x + 2;
  #pragma omp parallel num_threads(y * 3)
  {
    printf("https://helloacm.com\n");
  }
  return 0;
}
