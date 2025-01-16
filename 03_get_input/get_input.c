/*
Getting the input from the keyboard

*/

#include <stdio.h>

int main(){
    int square_side = 1;
    int square_per = 0;
    int square_A = 0;

    //write prompt
    puts("Enter the side of a square");
    //get input
    scanf("%d", &square_side);
    //math
    square_per = square_side*4;
    square_A = square_side*square_side;
    //output
    printf("The perimeter of the square with side side %d is %d\n", square_side, square_per);

    return 0;
}