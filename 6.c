#include <stdio.h>
int main()
{
    char n1[2],n2[2];
    printf("Enter your 2 symbol: ");
    scanf("%s", n1);
    scanf("%s", n2);
    printf("Your symbol are %s \n", n1);
    printf("Your symbol are %s ", n2);
    return 0;
}