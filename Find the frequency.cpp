#include<iostream>
using namespace std;
int main(){
    int n,x,count=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            count+=1;
        }
    }
    cout<<count;
}
