#include <bits/stdc++.h>  
using namespace std;
int main(){
    int n,m,k=0,i ,s=0;
    cin>>n;
    int a[n];
       for(i=0;i<n;i++){
           cin>>a[i];
       }
    cin>>m;
    int b[m];
       for( i=0;i<m;i++ ){
           cin>>b[i];
       } s=m+n;
       int c[s];
        for(i=0;i<n;i++){
           c[k]=a[i];
          k++;
       }
       
       for( i=0;i<m;i++ ){
           c[k]=b[i];
           k++;
       }
       
        sort(c,c+k);
       for( i=0;i<s;i++ ){
           cout << c[i] << " ";
       }
}
