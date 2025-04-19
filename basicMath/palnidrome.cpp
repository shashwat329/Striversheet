#include<iostream>
using namespace std;
bool palnidrome(int n){
    int temp = n;
    int rev = 0;
    while(temp != 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if (rev == n) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    if(palnidrome(n)) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}