#include<iostream>
#include<algorithm>
using namespace std;
int n,x,y,z,a[55][55],f[55][55][55][55];//从来没用过四维dp的蒟蒻瑟瑟发抖 
int main()
{
    cin >> n >> x >> y >> z;
    while(x>0 && y>0 && z>0)
    {
        a[x][y]=z;
        cin >> x >> y >> z;//读入要注意方法 
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                for(int l=1;l<=n;l++)
                {
                    int opt1=max(f[i-1][j][k-1][l],f[i][j-1][k][l-1]);
                    int opt2=max(f[i-1][j][k][l-1],f[i][j-1][k-1][l]);
                    //找出上一个时间点的最大值 
                    f[i][j][k][l]=max(opt1,opt2)+a[i][j];//再加上现在的位置的值 
                    if(i!=k && j!=l) f[i][j][k][l]+=a[k][l];//如果两个人的位置不同再加上另一个人的位置的值 
                }
            }
        }
    }
    cout << f[n][n][n][n];//输出，结束 
    return 0;
}