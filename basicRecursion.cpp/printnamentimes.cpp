#include<iostream>
using namespace std;
void printnthTime(string name,int n){
    if(n==0){
        return;
    }
    cout<<name<<n<<" ";
    printnthTime(name,n-1);

}
int main(){
    printnthTime("shashwat",5);
    return 0;
}