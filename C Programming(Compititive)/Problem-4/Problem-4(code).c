#include<stdio.h>
int main() {
    int x,total_travelled;
    printf("Enter the distance from home to office i.e x :");
    scanf("%d",&x);
    total_travelled=(x+x)*5; //first to go to office xkms and office to home xkms. Also office only works for 5 days in a week
    printf("Total distance travelled by Raju for office trips in a week = %d",total_travelled);
return 0;
}
