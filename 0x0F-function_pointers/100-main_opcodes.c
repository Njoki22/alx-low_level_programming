#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int n);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    int n = atoi(argv[1]);
    if (n < 0) {
        printf("Error\n");
        return 2;
    }
    print_opcodes(n);
    return 0;
}

void print_opcodes(int n) {
    char *p = (char *)&print_opcodes;
    for (int i = 0; i < n; i++) {
        printf("%02x", (unsigned char)p[i]);
    }
    printf("\n");
}

