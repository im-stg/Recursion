#include<iostream>
using namespace std;
int counter = 0;
int count(int n){
    
    if(n < 10){
        return 1;
    }
    int smallAns = count(n / 10);
    counter++;
    return counter + 1;
}


int main(){
    cout<<count(123);
}