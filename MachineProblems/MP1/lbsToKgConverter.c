#include <stdio.h>

int main() {
    float lbs;
    float kg;
    float g;

    printf("Please input the weight of the object in pounds: ");
    scanf("%f", &lbs);
    printf("weight of the object in pounds: %.2flbs\n", lbs);
    kg = lbs * 0.453592;
    g = lbs * 453.593;
    printf("The weight of the object in kilograms is %.2fkg\n", kg);
    printf("The weight of the object in grams is %.2fg", g);

}