#include<stdio.h>
int main() {
    int A,B,C,X;
     //give variables in question are A,B,C,X
    printf("Enter the topics prepared by Ramu i.e A,B,C :");
    scanf("%d%d%d",&A,&B,&C);
    printf("Enter the topic given on contest day i.e X :");
    scanf("%d",&X);
    //we are using nested if because the topics are only 10
   if(A>0 && A<=10 && B>0 && B<=10 && C>0 && C<=10 && X>0 && X<=10){
        //we are using OR operator
    if (X==A || X==B || X==C) {
        printf("Yes");
    } else {
        printf("No");
    }
   } else {
        printf("The values must be from 1 to 10");
   }
return 0;
}
