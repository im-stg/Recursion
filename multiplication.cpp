
#include<iostream>
using namespace std;


int multiplyNumbers(int m, int n) {
    // Write your code here
     int val = m;
    if(n == 0)
    return 0;

    val = val + multiplyNumbers(m , n-1);

    return val;


}

int main(){
    
    cout<<multiplyNumbers(2,4);
}