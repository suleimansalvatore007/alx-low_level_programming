#include <stdio.h>

int main() {
  int i;

  // print lowercase alphabet
  for (i = 97; i <= 122; i++) {
    putchar(i);
  }

  // print uppercase alphabet
  for (i = 65; i <= 90; i++) {
    putchar(i);
  }

  // print new line
  putchar('\n');

  return 0;
}

