#include <stdio.h>

void vulnerableFunction() {
    char buffer[10];
    printf("Enter a string: ");
    scanf("%s", buffer);
    sprintf(buffer, "Buffer content");
}

int main() {
    vulnerableFunction();
    return 0;
}
