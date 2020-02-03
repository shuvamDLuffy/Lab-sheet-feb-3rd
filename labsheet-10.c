# include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,x3,x4;
    printf("Enter the coordinate of pokhara ");
    scanf("%lf %lf",&x1,&x2);

    printf("Enter the coordinate of Karhmandu ");
    scanf("%lf %lf",&x3,&x4);
    
    double distance;
    distance = sqrt((x2-x1)*(x2-x1) + (x4-x3)*(x4-x3));
    printf("The dostance between pokhara and kathmandu is %lf",distance);
}