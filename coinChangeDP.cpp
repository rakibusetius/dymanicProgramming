#include<bits/stdc++.h>
using namespace std;

int DP_Change(int M, int C[], int d)
{
    int Cost[M+1];
    Cost[0]=0;

    for(int i=1;i<=M;++i)
    {
        Cost[i]= INT_MAX;
        for(int j=0;j<d;++j)
        {
            if( i>=C[j] && Cost[i-C[j]]+1<Cost[i])
            {
                Cost[i]=Cost[i-C[j]]+1;
            }
        }
    }
         return Cost[M];
    }
   


int main()
{
   int C[] = {1,10,25 };
	int d= sizeof(C) / sizeof(C[0]);
	int M = 31;
	cout<< DP_Change(M,C,d);
    cout<<endl;
	return 0;
}

// rakib@rakibiususet:~/Desktop/Competitive Programming/DynamicProgramming$ g++ coinChangeDP.cpp -o ccdp
// rakib@rakibiususet:~/Desktop/Competitive Programming/DynamicProgramming$ ./ccdp
// 4


