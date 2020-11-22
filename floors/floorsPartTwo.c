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

    int index = 0;
    int testNum = 0;

    while(c != EOF){
        if(c == '('){
            index++;
            testNum++;
            c = fgetc(f);
        } else {
            index++;
            testNum--;
            c = fgetc(f);
        }

        if(testNum == -1){
            printf("%d\n", index);
            break;
        }
    }



 return 0;
}