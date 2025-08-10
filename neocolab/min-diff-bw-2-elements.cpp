//Code for finding the lowest difference in an array
#include <iostream>
using namespace std;

int findLowestDifference(int arr[],int n){
    int low = abs(arr[0] - arr[1]);
    for(int i = 0; i<n;i++){
        for(int j = i + 1; j<n; j++){
            if(abs(arr[i] - arr[j]) < low){
                low = abs(arr[i] - arr[j]);
            }
        }
    }
    return low;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<findLowestDifference(arr,n);
}
