// Code for finding out the second lowest value in an array
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    int low = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]<arr[0]){
            low = arr[i];
        }
    }
    int secLow = arr[1];
    for(int i = 0; i<n; i++){
        if(arr[i]<secLow && arr[i] != low){
            secLow = arr[i];
        }
    }
    cout<<secLow;
}
