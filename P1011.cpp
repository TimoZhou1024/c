#include <iostream>
#include <math.h>
using namespace std;
int p[20]={0},q[20]={0},sum1=1,sum2=0,r;


int main(){
    p[0]=1;
    q[1]=1;
    long long int a,n,m,x,result;
    cin>>a>>n>>m>>x;

    for (int i=2;i<=n-1;i++)
    {
        p[i]=p[i-1]+p[i-2];
        q[i]=q[i-1]+q[i-2];
        
    }

    for (int i=0;i<=n-4;i++)
    {
        sum1+=p[i];
        sum2+=q[i];
    }

    r=(m-sum1*a)/sum2;
    sum1=1;
    sum2=0;
    for(int i=0;i<=x-3;i++)
    {
        sum1+=p[i];
        sum2+=q[i];
    }
    result=sum1*a+sum2*r;
    cout<<result;

    return 0;
}