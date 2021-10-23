#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 8;
    //int b = 8;
    int x = 2;
    //int y = 5;
    x = a++;
    //x = ++a;
    //int y = 2;
    //int z = x+y;    // + - * / %
    printf("a = %d\n",a); //we can write x+y here instead of z
    printf("x = %d\n",x); //we can write x+y here instead of z
    return 0;
}

/*int main()
{
    int x = 8;
    int y = 5;
    int z = x%y;
    printf("%d",z);
    return 0;
}*/

/*int main()   // knowing x is odd or even
{
    int x;
    scanf("%d",&x);
    int z = x%2;
    printf("%d",z);
    return 0;
}*/
