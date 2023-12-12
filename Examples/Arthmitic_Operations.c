#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user1,user2 ;


    scanf("%d %d",&user1,&user2);

    int Addition = user1+user2;
    int Substraction = user1-user2;
    int Multiplication = user1*user2;
    float Division = (float)user1/user2;
    int Remainder = user1%user2;

    printf("First user: %d \n Second user: %d\n",user1,user2);
    printf("Addition: %d\n",Addition);
    printf("Substraction Result: %d\n",Substraction);
    printf("Multiplication Result: %d\n",Multiplication);
    printf("Division Result: %f\n",Division);
    printf("Remainder Result: %d\n",Remainder);


    return 0;

}
