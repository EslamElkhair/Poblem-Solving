#include <stdio.h>
#include <stdlib.h>

/**************************************************************
Lab_3: Write a Function that takes two arguements, the number
       and the desigred bit to set
**************************************************************/
int set_bit(int ,int);

int main()
{
  printf("Enter a number and bit bit position: ");
  int num, bit_position;
  scanf("%d %d", &num, &bit_position);

  int res = set_bit(num,bit_position);

  printf("the number after setting the %d bit is %d", bit_position,res);

    return 0;
}

int set_bit(int num ,int bit_position) {
  num |= (1<<bit_position);

  return num;
}


