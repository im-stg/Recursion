#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {

    if(size == -1)
    return false;

    int num = input[size-1];
    if(x == num)
    return true;
    
    bool isPresent = checkNumber(input, size-1,x);

    return isPresent;

}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<checkNumber(arr,sizeof(arr)/sizeof(arr[0]),41);
}