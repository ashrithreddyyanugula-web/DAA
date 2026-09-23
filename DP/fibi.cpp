#include <iostream>
#include<vector> 
using namespace std;

int fib(int n){
    if(n<=1)
    return n;

    vector<int> dp(n+1);
    dp[1]=1;
    dp[0]=0;
    for(int i=2;i<=n;i++)
       dp[i]=dp[i-1]+dp[i-2];

    return dp[n];
    
   
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"fibbonacci "<<fib(n)<<endl;
}