#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float a,b;
    printf("***Enter option of your choice***\n\n");
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    scanf("%d",&n);
    switch(n){
    case 1:
        printf("Enter two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Result is %f",a+b);
        break;

    case 2:
        printf("Enter two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Result is %f",a-b);
        break;

    default:
        printf("Enter valid response");
    }
}
