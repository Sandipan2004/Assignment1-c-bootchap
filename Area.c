// This Program Find Area of Circle 
#include<stdio.h>
int main()
{
   float a,r; // a=Area of Circle and r=Redius of Circle
    printf("Enter the Redius of Circle: ");
    scanf("%f",&r);
   a=2*3.141*r;
   printf("The Area of Circle of Redius %.2f is %.2f",r,a);
   return 0;
}