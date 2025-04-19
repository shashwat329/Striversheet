#include<iostream>
using namespace std;
int countDigit(int n){
    int count = 0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}
int countdigit(int n){
    return log10(n);    
}
int main(){
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    cout<<"Number of digits in the number "<<n<<" is "<<countDigit(n)<<endl;
    cout<<"Number of digits in the number using log"<<n<<" is "<<countdigit(n)+1;
    return 0;
}