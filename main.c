#include <stdio.h>
#include <string.h>

int main() {
    char string_1[666];
    gets(string_1);
    char string_2[666];
    gets(string_2);
    printf("#Task 5#\n");
    strcpy(string_1, string_2);
    printf("The result of copying the first line to the second: ");
    printf("%s \n", string_2);
    printf("#Task 7#\n");
    printf("Line length \"%s\": %d \n", string_2, strlen(string_2));
    printf("#Task 9#\n");
    char *pw = strrchr(string_2, 'w');
    if (pw == NULL) {
        printf("Searched file not found\n");
    }
    else {
        printf("The file you are looking for is at position %d\n", pw - string_2 + 1);
    }
    printf("#Task 11#\n");

    return 0;
}
