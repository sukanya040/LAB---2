#include<stdio.h>
#include<math.h>
int sum_recursive(int x,int n){
    if(n==0){
        return 1;
    }
    else{
        return (sum_recursive(x,n-1)+pow(x,n));
    }
}
int main(){
    int x,n;
    printf("Enetr x value:");
    scanf("%d",&x);
    printf("Enter n value:");
    scanf("%d",&n);
    int sum=sum_recursive(x,n);
    printf("Sum of series 1+x+x^2+....+x^%d=%d\n",n,sum);
    return 0;
}