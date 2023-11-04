#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[5];
    for (int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr,arr+5);

    long long count1=0,count2=0;
    for (int i=0;i<4;i++){
        count1+=arr[i];
    }
    for (int i=1;i<5;i++){
        count2+=arr[i];
    }
    cout<<count1<<' '<<count2<<endl;


    return 0;
}