#include <stdio.h>
#include <stdlib.h>

/*******************************************************************
Assignment_3: Write a Function that takes two argument for drawing a Rectangle
              of * , the length and the width :
              example, the legnth is 3 and the width is 7:
  
              ********
              ********
              ********
              

*******************************************************************/

void draw_rectangle(int w, int l);

int main()
{
    int w =7;
    int l =3;

    draw_rectangle(w,l);


return 0;
}


void draw_rectangle(int w, int l) {

    for(int i=0;i<l;++i) {
        for(int j =0;j<w;++j) {
             printf("*");   
        }
        printf("\n");
       
    }
}