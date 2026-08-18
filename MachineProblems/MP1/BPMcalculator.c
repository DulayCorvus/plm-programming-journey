#include <stdio.h>

int main() {
    int BPS, years;
    years = 78;
    int total_seconds = years * 365 * 24 * 60 * 60;
    int total_beats = BPS * total_seconds;
    printf("Your total beats per second is %d", total_beats);
}