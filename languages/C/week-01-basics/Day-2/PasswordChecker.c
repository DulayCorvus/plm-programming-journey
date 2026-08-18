#include <ctype.h>
#include  <stdio.h>
#include <string.h>
#include <stdbool.h>

int has_upper(const char* password) {
    while (*password != '\0') {
        if (isupper(*password)) {
            return true;
        }
        password++;
    }
    return 0;
}

int has_lower(const char* password) {
    while (*password != '\n') {
        if (islower((*password))) {
            return true;
        }
        password++;
    }
    return 0;
}

int has_digit(const char* password) {
    while (*password != '\n') {
        if (isdigit(*password)) {
            return true;
        }
        password++;
    }
    return 0;
}

int has_symbol(const char* password) {
    while (*password != '\n') {
        if (ispunct(*password)){
            return true;
        }
        password++;
    }
    return 0;
}

int main() {
    bool isPasswordValid = false;
    do {

        bool uppercheck = false;
        bool lowercheck = false;
        bool digitcheck = false;
        bool symbolcheck = false;
        bool lengthcheck = false;

        char password[30];
        int categoriesMet = 0;

        printf("what is your password: ");
        fgets (password, sizeof(password), stdin);

        if (has_upper(password)) uppercheck = true, categoriesMet++;
        if (has_lower(password)) lowercheck = true, categoriesMet++;
        if (has_digit(password)) digitcheck = true, categoriesMet++;
        if (has_symbol(password)) symbolcheck = true, symbolcheck, categoriesMet++;
        if (strlen(password) >= 6) lengthcheck = true, categoriesMet++;
        if (categoriesMet >= 5) {
            printf("excellent\n");
        }
        else if (categoriesMet >=4) {
            printf("fair\n");
        }




        if (categoriesMet >= 4) isPasswordValid = true, printf("valid!");
        else {
            printf("Your password is too weak, please be adviced on what is missing from your password:\n");
            printf("_____________________\n");
            if ((uppercheck == false)) {
                printf("Upper Case\n");
            }
            if (lowercheck == false) {
                printf("Lower Case\n");
            }
            if (digitcheck == false) {
                printf("Numerical Number\n");
            }
            if (symbolcheck == false) {
                printf("Special Symbol\n");
            }
            if (lengthcheck == false) {
                printf("Should be 6 digits long.\n");
            }

            printf("_____________________\n");

        }


    } while (!isPasswordValid);

}