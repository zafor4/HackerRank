#include<stdio.h>
int main(){
    int arr[15];
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int count1=0,count2=0;
    for (int i=0;i<5-1;i++){
        count1+=arr[i];
    }
    for (int i=1;i<5;i++){
        count2+=arr[i];
    }
    printf("%d ",count1);
    printf("%d\n",count2);
    return 0;
}