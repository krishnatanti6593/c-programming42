#include<stdio.h>
int main(){
    int a[100];
    int j;
    printf("enter the number of array : ");
    scanf("%d",&j);
    printf("\n");
    for(int i=0;i<j;i++){
        printf("enter the elemets : ");
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0;i<j;i++){
        if(max<a[i]){
        max=a[i];
       }
    }
    printf("maximum  =%d\n",max);
    for(int i=0;i<j;i++){
        if(min>a[i]){
        min=a[i];
        }
    }
    printf("minimum =%d\n",min);
    return 0;
    

}