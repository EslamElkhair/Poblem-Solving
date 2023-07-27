#include <stdio.h>
#include <stdlib.h>

/**************************************************************
Lab_1: Write a code that calculate the number of ones in
       a specific number
**************************************************************/

int count_ones(unsigned int num);

int main()
{

  printf("Enter a number: ");
  unsigned int num;
  scanf("%d" , &num);

  int result = count_ones(num);

  printf("no. of ones in %d are %d",num , result);

    return 0;
}

int count_ones(unsigned int num) {
  int cnt = 0;

  for(int i=0;i<32;++i) {
    if(num & 0x01) {
      cnt++;
    } 
    num = num >> 1;
  }
  return cnt;
}
