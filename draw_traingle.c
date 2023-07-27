#include <stdio.h>
#include <stdlib.h>

/*******************************************************************
Assignment_3: Write a code that draws the following shabe :
  
              *
              **
              ***
              ****
              *****

*******************************************************************/

int main()
{
    // Notice : this solution uses two loops for rows and colunms 
    //this take more execution time so we need a more optimized code 
    int n ;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=0;i<n;++i) {
        for(int j=0;j<=i;++j) {
                printf("*" );
        }
         printf("\n");
    }
    


return 0;
}