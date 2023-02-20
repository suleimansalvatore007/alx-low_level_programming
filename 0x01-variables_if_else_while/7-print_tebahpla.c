#include <stdio.h>

int main() {
  char letter = 'z'; // start at the end of the alphabet

  while (letter >= 'a') { // keep going until we reach 'a'
    putchar(letter); // print the current letter
    letter--; // move to the next letter
  }

  putchar('\n'); // print a new line
  return 0;
}

