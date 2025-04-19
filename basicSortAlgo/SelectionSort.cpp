#include<iostream>
using namespace std;
void selectionsSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(arr[i]>arr[minIndex]){
            swap(arr[i],arr[minIndex]);
        }
    } 
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    selectionsSort(arr, n);
    display(arr, n);
    return 0;
}