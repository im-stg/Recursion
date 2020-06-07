#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {

    if(input[size-1] == x){
        return size-1;
    }

    if(size == 0)
    return -1;

    int val = lastIndex(input, size-1, x);

    if(val == -1)
    return -1;
    else
    return val;
}
int main(){

    int arr[] = {1,2,2,1,5};
    cout<<lastIndex(arr,sizeof(arr)/sizeof(arr[0]),1);
}