2
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*******************************************************************
Assignment_2: Develope a code that takes a number and a specific bit 
              Your code should display the value of this bit
             
              Example: the inserted number is 12 , 
              the inserted bit is 3, so the the 3rd bit value is 1
              your code should display the value of the 3rd bit which
              is 1.. Note: your code should be generinc and applicable
              on any inserted number and any inserted bit

*******************************************************************/

int main()
{
    printf("Enter the number and bit position: " );
    int num,bit_num = 3;
    scanf("%d %d", &num , &bit_num);

    //logic 
    int bit_value = (num >>bit_num) & 1;

    printf("the value of Bit number (%d) is :%d \n",bit_num, bit_value);

    system("pause");
    return 0;
}