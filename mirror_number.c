#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*******************************************************************
Assignment_1: Develope a code Mirrors any inserted number
              Example: the number ( 123 ) Mirror is ( 321 )
*******************************************************************/

int main()
{
// Solution1: reversing using modulus and division operator 
    int n,reversed_n=0;
    printf("Enter the number: ");
    scanf("%d",&n);


    // Logic
    while(n!=0){
        int temp = n % 10; // 12,3

        reversed_n = reversed_n * 10 + temp;
        n/=10;
    }

    printf("the mirror of number :%d",reversed_n);

//solution2 : reversing using Bitwise operations : Wrong 

/*    int n, reversed_n =0;
    printf("Enter the number: ");
    scanf("%d",&n);

  
    //logic 
    while (n != 0) {
        reversed_n = (reversed_n << 1) | (n & 1);
        n = n >> 1;
    }


    printf("the mirror of number :%d\n",reversed_n);*/


    system("pause");
    return 0;
}
