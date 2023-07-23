#include<stdio.h>
int main(){
    int a[3],b[3];
    int count1=0,count2=0;
    for (int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    for (int i=0;i<3;i++){
        if (a[i]>b[i]){
            count1+=1;
        }
        else if (a[i]<b[i]){
            count2+=1;
        }
    }
    printf("%d %d\n",count1,count2);
    return 0;
}