#include <stdio.h>
#include "sum.h"

int main(){
    int number;
    printf("Enter the number to find the sum of its digits:\n");
    scanf("%d",&number);
    printf("The sum of digits of %d is %d.", number, sum(number));
    return 0;
}
