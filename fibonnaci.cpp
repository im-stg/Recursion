#include<iostream>
using namespace std;


// find nth fibonacci no.

int fibonacci(int n){

    // check base case for n = 2 
    if(n==0){ return 0;}    
    if(n==1){ return 1;}

    int smallOutput1 = fibonacci(n-1);  //for n = 2  it will give 1
    int smallOutput2 = fibonacci(n-2);  //for n = 2  it will give 0, now we can't move to -ve no.
    return smallOutput1 + smallOutput2;
}

int main(){
    cout<<fibonacci(6);  //6th fibonacci no.  0 1 1 2 3 5 8<- its 8
}