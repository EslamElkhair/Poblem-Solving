#include <stdio.h>
#include <stdlib.h>

/*******************************************************************
Assignment_2: Write a code that prints the Binary representation of
              Entered number
              example : the entered number is : 12
                        your code should print the binary
                        value of the number :   00001100
              Note: Non of "printf" function atrributes like 
                    %d , %f , %c could repesent the binary value
                    of the number
*******************************************************************/

int main()
{
  
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0;i<sizeof(num);++i) {
        int bit_value = (num >> i) & 1;
        printf("%d", bit_value);
    }

       printf("\n");


return 0;
}