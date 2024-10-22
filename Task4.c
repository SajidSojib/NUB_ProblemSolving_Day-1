#include <stdio.h>
int main()
{
    int redius;
    printf("Enter Redius : ");
    scanf("%d",&redius);

    printf("Perimeter of the Circle = %.6f inches\n",2*3.1416*redius);
    printf("Area of the Circle = %.6f square inches\n",3.1416*redius*redius);

    return 0;
}