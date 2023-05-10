#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[n];
    }
    int max=a[0];
    for(i=0;i<n;i++){
        if(max>a[i]){
            max=a[i];
        }
    }for(i=0;i<n;i++){
        if(a[i]==max){
            cout<<i;
        }
    
    }
    
}
