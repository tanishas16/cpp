#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef pair<int,int> p;
typedef vector<int> v;
typedef unordered_map<int,int>ump;
typedef unordered_set<int>us;
typedef map<int,int>mp;
typedef set<int>s;

#define nl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define f(n) for(int i=0;i<n;++i)

lli pow1(lli a,lli b,lli m)
{
    lli res=1;
    while(b>0)
    {
        if(b&1)
            res=((res%m)*(a%m))%m;
        a=((a%m)*(a%m))%m;
        b>>1;
    }
    return(res);
} 

lli pow2(lli a,lli b)
{
    lli res=1;
    while(b>0)
    {
        if(b&1)
            res=res*a;
        a=a*a;
        b>>1;
    }
    return(res);
} 
int count1=0;
bool solve(int n,vector<vector<int>>v3,int row,int col,int move){

    if(move>=n*n)
        return(true);

    ++count1;
    cout<<count1<<nl;
    vector<int>v1{2,1,-1,-2,-2,-1,1,2},v2{1,2,2,1,-1,-2,-2,-1};
    for(int i=0;i<8;++i)
    {
        int new_row=row+v1[i];
        int new_col=col+v2[i];
        if(new_row<0 or new_col<0 or new_row>=n or new_col>=n or v3[new_row][new_col]!=0)
            continue;
        v3[new_row][new_col]=move+1;
        bool value=solve(n,v3,new_row,new_col,move+1);
        if(value)
            return true;
        v3[new_row][new_col]=0;
    }
    return(false);
}


int main()
{
	fast_cin();

 //    #ifndef ONLINE_JUDGE
 //    freopen("input.txt","r",stdin);
 //    freopen("output.txt","w",stdout);
 //    #endif

	// lli t;
	// cin >> t;
	// while(t>0)
 //    {
 //        //knight move
 //        int n;
 //        cin>>n;
 //        vector<vector<int>>v1(n,vector<int>(n,0));
 //        v1[0][0]=1;
 //        if(solve(n,v1,0,0,1))
 //            cout<<"GOOD"<<nl;
 //        else
 //            cout<<"BAD"<<nl;
 //        for(int i=0;i<v1.size();++i)
 //        {
 //            for(int j=0;j<v1.size();++j)
 //                cout<<v1[i][j]<<" ";
 //            cout<<endl;
 //        }
 //        cout<<nl<<count1;
 //        --t;
  //  }
    /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        int value;
       v.push_back(value); 
    }
    sort(v.begin(),v.end());
    cout<<max(v[0]*v[1],v[n-1]*v[n-2]);
//     return 0;
// }

	return 0;
}

 
