int main() {
    int i, j;

    for (i = 0; i <= 8; i++) {
        for (j = i+1; j <= 9; j++) {
            putchar(i/10 + '0'); // Prints the first digit
            putchar(i%10 + '0'); // Prints the second digit
            putchar(','); // Prints the separator
            putchar(' '); // Prints the space
            putchar(j/10 + '0'); // Prints the first digit
            putchar(j%10 + '0'); // Prints the second digit
            putchar('\n'); // Prints the newline
        }
    }

    return 0;
}

