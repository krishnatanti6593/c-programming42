#include<stdio.h>
int main(){
    int n,n1=1;
    printf("enter the number");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("%d ",n1);
        n1++;
       }
       printf("\n");
    }
    return 0;
}