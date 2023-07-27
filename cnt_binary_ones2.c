#include <stdio.h>
#include <stdlib.h>

/**************************************************************
Lab_2: Write a code that calculate the number of ones in
       a specific number in the shortest execution time
**************************************************************/
int count_ones(unsigned int num);
int main()
{
  printf("Enter a number: ");
  unsigned int num;
  scanf("%d",&num);

  int result = count_ones(num);

  printf("the Ones in %d are %d",num,result);
    return 0;
}

int count_ones(unsigned int num) {
  int cnt=0;

  while(num) {
    if(num & 0x01) {
      cnt++;
    }
    num>>=1;
  }
  return cnt;
}
