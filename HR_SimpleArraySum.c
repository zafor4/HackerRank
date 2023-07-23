#include<stdio.h>
int getArraySum(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("%d\n",getArraySum(arr,n));
}