#include <stdio.h>
#include <string.h>

int main() {
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("what is your name?");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Hello %s!", name);




}