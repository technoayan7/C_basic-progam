#include <stdio.h>
int main() {    

    int number1, number2, dif;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    dif = number1 - number2;      
    
    printf("%d + %d = %d", number1, number2, dif);
    return 0;
}
