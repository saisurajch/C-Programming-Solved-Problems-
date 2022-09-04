#include<stdio.h>
#include<math.h> //include math library as we are dealing with tan
int main() {
    double degree,radian; //we are using double as we get higher values while using trigonometric functions in C
    printf("Enter the angle in degrees :");
    scanf("%lf",&degree);
    radian=degree*(M_PI/180); //In math library M_PI defines mathematical pi value and [1 degree = pi/180]
    printf("The value of tan(%.0lf) = %lf",degree,tan(radian));
return 0;
}
