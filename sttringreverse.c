#include <stdio.h>
#include <string.h>

void reverse_string(char *string, int index) {
    if (index < 0)
        return;
    putchar(string[index]);
    reverse_string(string, index - 1);
}

int main(void) {
    char string[] = "Hello, World!";
    int length = strlen(string);
    reverse_string(string, length - 1);
    putchar('\n');
    return 0;
}
