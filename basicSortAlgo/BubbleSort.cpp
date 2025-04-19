#include<iostream>
using namespace std;
int BubbleSort(int arr[],int n){
    int count = 0;
    bool NotSorted = true;
    while(NotSorted){
        count++;  
        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                NotSorted = true;
            }
        }
    }
return count;
}
void display(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    int count = BubbleSort(arr,n);
    display(arr,n);
    cout<<"number of times: "<<count<<endl;
    return 0;
}