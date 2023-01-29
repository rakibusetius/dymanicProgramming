#include<bits/stdc++.h>
using namespace std;
const int N=100;
vector<int> a(N);

int lis(int i){
    int ans=1;
    for(int j=0;j<i;++j)
    {
        if(a[i]>a[j])
        {
            ans=max(ans,lis(j)+1);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;++i)
    {
        ans=max(ans,lis(i));
    }

    cout<<ans<<endl;
}

// rakib@rakibiususet:~/Desktop/Competitive Programming/DynamicProgramming$ g++ longestIncreasingSubsequences.cpp -o li
// rakib@rakibiususet:~/Desktop/Competitive Programming/DynamicProgramming$ ./li
// 10
// 9 2 5 3 7 11 8 10 13 6
// 6
