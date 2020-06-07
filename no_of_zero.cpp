//no.of zeroes in a number

#include<iostream>
using namespace std;
int smallProb = 0;

int countZeros(int n) {
    // Write your code here
    if(n == 0){
        return 0;
    }
    int val =  n%10;
         
    smallProb = countZeros(n/10);  
    
    if(val == 0){                        //instead zero we can have any no. whom occurrences we need
        return smallProb + 1;
    }else
    return smallProb;

}

int main(){
    
    cout<<countZeros(1090040);
}