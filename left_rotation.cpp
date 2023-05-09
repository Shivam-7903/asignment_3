#include <bits/stdc++.h>

using namespace std;

int main(){
   int  n,d,i;
   cin>>n;
   int  a[n];
   cin>>d;
    for( i=0;i<n;i++) {
        cin>>a[i];
    }
    while(d--){
        int temp =a[0];
        for(int i=0;i<n;i++){
         a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    for( i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
