#include <stdio.h>

void vulnerableFunction() {
    char buffer[10];
    printf("Enter a string: ");
    scanf("%s", buffer);
    sprintf(buffer, "Buffer content %s, %s" , "astar", "bs");
}

int main() {
    vulnerableFunction();
    return 0;
}
