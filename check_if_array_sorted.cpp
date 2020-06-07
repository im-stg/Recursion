#include<iostream>
using namespace std;


bool sorted(int arr[], int n){

    if(n==0 || n==1)
    return true;
    
    if(arr[0] < arr[1])
    return false;

    bool isSorted = sorted(arr+1 , n-1);  //reduce the size of array as well as start from the next index now as previos is checked sorted

    return isSorted;
    
}

int main(){

    int arr[] = {1,2,3,4,5};
    cout<<sorted(arr,sizeof(arr)/sizeof(arr[0]));
}