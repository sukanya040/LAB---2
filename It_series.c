#include<stdio.h>
#include<math.h>
int sum_iterative(int x,int n){
    int sum=0;
    int i;
    int term =1;
    for(i=0;i<=n;i++){
        sum+=term;
        term*=x;
    }
    return sum;
}
int main(){
    int x,n;
    printf("Enter x value:");
    scanf("%d",&x);
    printf("Enter n value:");
    scanf("%d",&n);
    int sum_series = sum_iterative(x,n);
    printf("Sum of series 1+x+x^2+....+x^%d=%d\n",n,sum_series);
    return 0;
}