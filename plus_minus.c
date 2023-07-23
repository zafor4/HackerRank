#include<stdio.h>
int main(){
    int n ;
    double count1=0,count2=0,count3=0;
    scanf("%d",&n);
    double arr[n];
    for (int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]>0){
            count1++;
        }
        else if (arr[i]<0){
            count2++;
        }
        else if (arr[i]==0){
            count3++;
        }
    }
    printf("%lf\n",(count1/n));
        printf("%lf\n",(count2/n));
            printf("%lf\n",(count3/n));

    return 0;
}