#include <stdio.h>

void vulnerableFunction(char[] param) {
    char buffer[100];
    int size = -1;
    printf("Enter a string: ");
    scanf("%s %d", buffer, size);
    sprintf(buffer, "%s %d", param, size);
}

int main() {
    vulnerableFunction("testing");
    return 0;
}
