#include <stdio.h>
#include <stdlib.h>

int fact(int inputNum);

int main()
{
    int num;
    int factorial;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    factorial = fact(num);

    printf("The factorial of %d is %d", num, factorial);
    return 0;
}

int fact(int inputNum){
    if(inputNum >= 1){
        return inputNum * fact(inputNum - 1);
    }else{
        return 1;
    }
}
