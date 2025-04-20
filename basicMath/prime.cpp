#include<iostream>
using namespace std;
bool checkprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    if (checkprime (n)){
        cout<< "this is prime: "<<endl;
        return 0;
    }
    cout<<"this is not a prime!"<<endl;
    return 0;
}