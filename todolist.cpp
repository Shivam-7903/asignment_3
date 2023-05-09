#include <iostream>
using namespace std;

int main() {
	int n,m;
	int count;
	cin>>m;
	for(int i=1;i<=m;i++){
	    count = 0;
	    cin>>n;
	  int a[n];
	  for(int j=0;j<n;j++){
	      cin>>a[j];
	  }
	  for(int j=0;j<n;j++){
	      if(a[j]>=1000){
	          count+=1;
	      }
	  }
	  cout<<count<<endl;
	}
	
	return 0;
}
