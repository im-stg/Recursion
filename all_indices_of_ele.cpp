#include<iostream>
using namespace std;


int allIndexes(int input[], int size, int x, int output[]) {

    if(size == 0){
        return 0;
    }  

    int val = allIndexes(input+1,size-1,x,output);

    if(input[0] == x){
        for(int i = val-1 ; i >=0 ; i--){   // will set the last value to one index ahead to make space for 0th index in output array

        output[i+1] = output[i] + 1;
      
        }

        output[0] = 0;   // store index zero at first position
        val++;

    }
    else{
        for(int i = 0 ; i < val ; i++){   // don't update index as their is no x at input[0], henceno space is req

        output[i] = output[i] + 1;
        }
    }   

    return val;
}



int main(){
    int arr[] = {2,4,6,4,1,4};
    int out[6];
    int s = allIndexes(arr, sizeof(arr)/sizeof(arr[0]), 4, out);

    for(int i = 0 ; i<s ; i++){
        cout<<out[i]<<" ";

    }
    
}