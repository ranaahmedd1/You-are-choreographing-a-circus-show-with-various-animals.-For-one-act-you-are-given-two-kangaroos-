#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//x1 is the place of kangaroo1 and v1 is the meters per jump
//x2 is the place of kangaroo2 and v2 is the meters per jump
//x3 is where they are gonna meet & n is the number of jumps 
//x3=x1+nv1=x2nv2
//then n is +ve integer and equal =(x1-x2)/(v2-v1)
void kangaroo(int x1, int v1, int x2, int v2) {
   
        if(x1<x2 && v2<v1){
            if(((x2-x1)/(v1-v2)) >0 && ((x2-x1)%(v1-v2)) ==0 )
           {
              printf("YES");           
            }
            else printf("NO"); 
            }
        else printf("NO");           
        

}

int main()
{  int x1,x2,v1,v2;
      scanf("%d",&x1);
      scanf("%d",&v1);
      scanf("%d",&x2);
      scanf("%d",&v2);

    kangaroo( x1,  v1,  x2,  v2);
    
}

