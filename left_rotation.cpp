#include <bits/stdc++.h>

using namespace std;

int main(){
   long long n,d;
   cin>>n;
   long long a[n];
   cin>>d;
    for(long long i=0;i<n;i++) {
        cin>>a[i];
    }
    while(d--){
        long long temp =a[0];
        for(int i=0;i<n-1;i++){
         a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    for(long long i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
