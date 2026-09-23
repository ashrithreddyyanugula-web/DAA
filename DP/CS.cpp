#include<iostream>
using namespace std;

int CS(int n){
    if(n<=2)
        return n;
    
    int prev1=2,prev2=1;
    for(int i=3;i<=n;i++){
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;

}
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    cout<<"number ways to climb "<<n<<" steps :"<<CS(n);
}