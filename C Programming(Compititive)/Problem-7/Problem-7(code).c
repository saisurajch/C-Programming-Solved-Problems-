#include<stdio.h>
main() {
    float p,p_in_liter,oil_supplied,oil_left; // here we prefer to use float because we may expect decimal values in the answer
    //p - number of gallons Ravi brings from village
    // 1 gallon = 3.785 liters
   printf("Number of gallons of oil Ravi bought from his village :");
   scanf("%f",&p);
   p_in_liter=p*3.785;
   oil_supplied=2*50;
   //we are using if else condition here because we need to check whether Ravi has enough oil to supply
   if (oil_supplied<p_in_liter) {
       oil_left=p_in_liter-oil_supplied;
        printf("The oil left with Ravi = %f  liters",oil_left);
   } else {
        printf("The oil left with Ravi = 0 liters");
   }
}
