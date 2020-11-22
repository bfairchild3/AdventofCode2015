/**
 * Author: Brent Fairchild
 *
 * This program is from Advent of Code 2015 it solves the first problem - part one
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv){

    FILE *f = fopen("floors.dat", "r");
    char c = fgetc(f);

    int numUp = 0;
    int numDown = 0;
    while(c != EOF){
        if(c == '('){
            numUp++;
            c = fgetc(f);
        } else {
            numDown++;
            c = fgetc(f);
        }
    }

    printf("%d\n", numUp);
    printf("%d\n", numDown);

    int floors = numUp - numDown;
    printf("%d\n", floors);

    return 0;
}