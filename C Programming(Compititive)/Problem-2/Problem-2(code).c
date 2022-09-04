#include<stdio.h>
int main() {
    int day1,dayn,n,p;
    float total_hours;//take hours as float as total minutes may not be perfectly divisible by hours
    printf("Number of consecutive days problems were solved i.e n :");
    scanf("%d",&n);
    //Take an example 1+3+5+7; then find mathematical relation for it.
    //We get number of problems solved on dayn=(2*n)-1
    dayn=(2*n)-1;
    printf("Number of problems solved on %dth day = %d",n,dayn);
    printf("\nNo of minutes spent on solving each problem i.e p:");
    scanf("%d",&p);
    //let a month have 30 days
    //sum of n odd natural numbers = n*n, so 30*30
    total_hours=(p*30*30)/60;
    printf("Total hours taken to solve problems in that month = %.1f",total_hours);
return 0;
}
