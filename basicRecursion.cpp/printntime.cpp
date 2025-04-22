#include<iostream>
using namespace std;
void printnthTime(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    printnthTime(n-1);

}
int main(){
    int n;
    cin>>n;
printnthTime(n);
    return 0;
}