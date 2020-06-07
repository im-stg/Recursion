#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {

    if(input[0] == x){
        return 0;
    }

    if(size == 0)
    return -1;

    int val = firstIndex(input+1, size-1, x);

    if(val == -1)
    return -1;
    else
    return val+1;
}
int main(){

    int arr[] = {1,2,2,1,5};
    cout<<firstIndex(arr,sizeof(arr)/sizeof(arr[0]),5);
}