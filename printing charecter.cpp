#include <stdio.h>

int main() {
    char input[100];
    printf("Enter input: ");
    scanf("%s", input);
    int i = 0;
    while (input[i] != '\0') {
        char currentChar = input[i++];
        int count = 0;
        while (input[i] >= '0' && input[i] <= '9') {
            count = count * 10 + (input[i++] - '0');
        }
 for (int j = 0; j < count; j++) {
            printf("%c", currentChar);
        }
    }

    printf("\n");

    return 0;
}

