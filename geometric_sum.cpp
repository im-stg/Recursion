#include<iostream>
using namespace std;


int power(int n , int k){
    if(k == 0)
    return 1;
    int pow = n*power(n,k-1);
    return pow;

}

double geometricSum(int k) {
    // Write your code here

    if(k==0){
        return 1;
    }
    
    double sum = (double)1/power(2,k);

    cout<<"sum "<<sum<<" ";
    
    sum = sum + geometricSum(k-1);

    return sum;

}


int main(){
    cout<<geometricSum(3);
}