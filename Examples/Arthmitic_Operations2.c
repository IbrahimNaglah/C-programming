#include <stdio.h>
#include <stdlib.h>
#define sum(x,y) x+y
#define Mult(x,y) x*y
#define result(x,y) (x+y)*x
#define pi 3
#define Max(x,pi) (x>pi? x:pi)

#include "DebugHeader.h"

int main()
{
    int x=2,y =20;

    
    printf("Sum x+y= %d\n",sum(x,y));
    
	printf("Multiply x*y= %d\n",Mult(x,y));

    printf("Result (x+y)*x= %d\n",result(x,y));
    

    return 0;
}
