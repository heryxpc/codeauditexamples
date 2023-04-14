#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[5];
    strcpy(buffer, input);
    printf("Buffer contents: %s\n", buffer);
}

int main() {
    char input[10] = "123456789";
    vulnerable_function(input);
    return 0;
}
