#include<stdio.h>
int main() {
    int x,max;
    printf("Enter the duration of contest in minutes i.e x :");
    scanf("%d",&x);
        //1 submission for 30sec. So 2 submissions for one minute
        //Also participant cannot make any submission in the last 5 seconds i.e one submission will be decreased from the last minute
    max=(x*2)-1;
    printf("The maximum submissions possible by the participant in %d mins = %d",x,max);
return 0;
}
