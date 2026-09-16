#include <stdio.h>
int main() {
    char name[50];
    int ID;

        printf("Hello World\n");

        printf("My name is:");
        scanf(" %49[^\n]", name);

        printf("Student ID:");
        scanf("%d", &ID);
    return 0;
}
