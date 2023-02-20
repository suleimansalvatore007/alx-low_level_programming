int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            for (int k = j+1; k < 10; k++) {
                if (i != j && i != k && j != k) {
                    putchar('0' + i);
                    putchar('0' + j);
                    putchar('0' + k);
                    if (i < 7) {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    return 0;
}

