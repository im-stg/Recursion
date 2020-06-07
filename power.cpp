#include"bits/stdc++.h"
using namespace std;

int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  int pow = x;
    if((1 <= x <= 30) & (0 <= n <= 30))
    {       
        if(n == 0){
            return 1;
        }
        pow = pow*power(x,n-1);
    }
    return pow;
}

int main(){
    cout<<power(2,4);
}