#include <iostream>
using namespace std;
int main()
{
     int n;
        cin>>n;
        int num[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            num[i][j]=0;
        }
    }
        int q=1;
        int x=0;
        int y=n-1;
        num[x][y]=q;
        while(q<n*n)
        {
                while(x+1<n && num[x+1][y]==0)
                {
                        num[++x][y]= ++q;
                }
                while(y-1>=0 && num[x][y-1]==0)
                {
                        num[x][--y]= ++q;
                }
                while(x-1>=0 && num[x-1][y]==0)
                {
                        num[--x][y]= ++q;
                }
                 while(y+1<n && num[x][y+1]==0)
                {
                        num[x][++y]= ++q;
                }
        }
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        cout<<num[i][j];
            if(j<n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}         
