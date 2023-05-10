#include<iostream>
using namespace std;
int main(){
    int n,i,k,temp=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
             temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
 
}
cin>>k;
cout<<a[k-1];
  
}
