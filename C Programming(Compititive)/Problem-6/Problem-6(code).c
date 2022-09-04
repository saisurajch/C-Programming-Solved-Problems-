#include<stdio.h>
int main() {
    int N,M,K;
        //N - size of friend group
        //M - Capacity of course
        //K - Students already registered
    printf("Enter the size of friend group i.e N:");
    scanf("%d",&N);
    printf("Enter the capacity of course i.e M:");
    scanf("%d",&M);
    printf("Enter the number of students who already registered i.e K :");
    scanf("%d",&K);
        //now we need to use if else to determine the possibility for the group to register together
        //That means the sum of both (size of group) and (students already registered) must be less than or equal to the capacity of the course
    if ((N+K)<=M) {
            printf("Yes, it is possible for the group to register together");
    } else {
            printf("No, it is not possible for the group to register together");
    }

}
