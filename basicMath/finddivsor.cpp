#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i= 1;i<sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            cout<<i<<" "<<n/i<<" ";
        }
    }

    return 0;
}