#include<stdio.h>
#include<math.h>
void input();
int valid(float a,float b,float c);
float para(float a,float b,float c);
float area(float a,float b,float c);
void result();
void nottriangle(int n);
int main()
{
    result();
    return 0;
}void result()
{
    float a,b,c;
    printf("enter the 3 lenght");
    scanf("%f %f %f",&a,&b,&c);

    int A = valid(a,b,c);
    if(a<=0 || b<=0 || c<=0)
    {
        printf("enter positive number only!");
    }
    else if(A==1)
    {
        printf("valid triangle");
        float p=para(a,b,c);
        printf("parameter=%f",p);
        float ar=area(a,b,c);
        printf("area=%f",ar);
    }
    else if(A==0)
    {
        printf("invalid triangle");
    }

}
float para(float a,float b,float c)
{
    return (a+b+c)/2;
}
int valid(float a,float b,float c)
{
    float s;
    if((a+b)>c && (b+c)>a && (a+c)>b)
      return 1;

    else
        return 0;
}
float area(float x,float y,float z)
{
    float s=para(x,y,z);
    return sqrt(s*(s-x)*(s-y)*(s-z));
}


