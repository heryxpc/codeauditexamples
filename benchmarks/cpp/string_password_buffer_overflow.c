
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool IsPasswordOK(void) {
    char Password[12];

    gets(Password);
    return 0 == strcmp(Password, "goodpass");
}

int main(void) {
    int PwStatus;

    puts("Enter password:");
    PwStatus = IsPasswordOK();
    if (PwStatus == false) {
        puts("Access denied");
        exit(-1);
    }
}