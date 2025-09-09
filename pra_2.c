#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("_____________________________________________\n");
    printf("Enter positive length value :");
    scanf("%f",&length);
    printf("_____________________________________________\n");
    printf("Enter positive breadth value :");
    scanf("%f",&breadth);
    printf("_____________________________________________\n");
    area = length*breadth;
    perimeter = 2*(length+breadth);
    printf("Area :%f\n",area);
    printf("_____________________________________________\n");
    printf("Perimeter :%f\n",perimeter);
    printf("_____________________________________________\n");
}
