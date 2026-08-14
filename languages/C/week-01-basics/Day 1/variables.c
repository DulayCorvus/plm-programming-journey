#include <stdio.h>
#include <stdbool.h>

int main() {

    //Bool and if statements
    bool isonline = false;
    printf("%d\n", isonline);
    if (isonline) {
        printf("you're online\n");
    }
    else{
        printf("you're offline\n");
    }


    //Char one bite
    char school[] = "Pamantasan lungsod ng Maynila";

    //ints stores whole numbers
    int age;
    int year = 2025;
    age = 18;
    printf("my age is %d\n", age );
    printf("the year is %d\n", year);

    //floats 
    float GWA = 92.3;
    float price = 19.23;
    printf("My Gwa is %.1f\n", GWA);
    printf("the price is %.1f\n", price);

    float pi = 3.14159265589;
    printf("the value of pi is %lf\n", pi);
    printf("i currently go to %s\n", school);
    
}