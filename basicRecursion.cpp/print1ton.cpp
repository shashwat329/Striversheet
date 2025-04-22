#include<iostream>
using namespace std;
int print1ton(int n){
    if(n==1){
        return 1;
    }
   return 1+print1ton(n-1);
   
}
int main(){
    int n;
    cin>>n;
    cout<<print1ton(n)<<" ";
    return 0;
}