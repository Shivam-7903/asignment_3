#include <iostream>

using namespace std;

int main()
{
    long long n,i,sum1=0,sum=0,j;
    cin>>n;
    long long a[n];
        for(i=0;i<n-1;i++){
            cin>>a[i];
        }
        for(j=1;j<=n;j++){
            sum1+=j;
        }
      for(i=0;i<n-1;i++){
          sum+=a[i];
      }
        cout<<sum1-sum;

    return 0;
}
