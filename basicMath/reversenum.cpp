#include<iostream>
using namespace std;
int reverseint(int n){
    int rev = 0;
    while(n!=0){
     rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"entered number is: "<<n<<endl;
    cout<<"revse of "<<n<<" "<<reverseint(n)<<endl;

    return 0;
}