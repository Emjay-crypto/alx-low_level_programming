#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
 */

void print_line(char *b, int len, int offset) {
    int i;

    for (i = 0; i < len; i++) {
        printf("%02x", b[offset * 10 + i]);
        if (i % 2 == 1)
            putchar(' ');
    }
    for (; i < 10; i++) {
        printf("  ");
        if (i % 2 == 1)
            putchar(' ');
    }
}

void print_buffer(char *b, int size) {
    int i;

    for (i = 0; i < (size + 9) / 10; i++) {
        printf("%08x:", i * 10);
        if (i < size / 10) {
            print_line(b, 10, i);
        } else {
            print_line(b, size % 10, i);
        }
        putchar('\n');
    }
    if (size == 0)
        putchar('\n');
}
