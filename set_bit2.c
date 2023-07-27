#include <stdio.h>
#include <stdlib.h>

/**************************************************************
Lab_4: Write a Function that takes no arguments and doesn't
       return the output and asks the user to enter the number 
       and the bit to set
**************************************************************/

void set_bit(void) {

  unsigned int num, bit_position;
  printf("Enter a number and bit position: ");
  scanf("%d %d",&num,&bit_position);

  int res = num | (1<<bit_position);

  printf("the number after setting %dth bit is %d",bit_position,res);

}

int main()
{
  set_bit();
    return 0;
}

