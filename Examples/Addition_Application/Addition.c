#include <stdio.h>
#include <stdlib.h>
#include "MathLib.h"
#include "ErrorLog.h"

signed int showResult;
int main()
{
    char param1,param2;
    printf("Please enter 2 8-bit values: ");
    scanf("%c %c",&param1,&param2);

    printf("\n\nRESULTS\n");
    printf("ASCCI Value: %d\nCharacter: %c\n",Math_Add(param1,param2),Math_Add(param1,param2));
    printf("Param1:%c - Param2:%c\n",param1,param2);
    printf("--------------------------------------------------------------------\n");



    if( Math_Add(param1,param2)> 127 || Math_Add(param1,param2)<-128)
    {
        ErrLog_Log();
        printf("\n--------------------------------------------------------------------\n");
    }

}


/*


*/
