#include<stdio.h>
int main(){
    int a[100];
    int n,key;
    printf("enter the number of element : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the array : ");
        scanf("%d",&a[i]);
    }
    printf("enter the array to find index  : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf(" index no : %d",i);
        }
    }
    return 0;
}
