#include<iostream>
using namespace std;


int power(int num, int pow)
{
    int ans = num;
    
    if(pow == 0)
        return 1;
    
    ans = ans*power(num,pow-1);
   
    return ans;
}


int strToInt(char input[], int s, int k){
    
    if(s==0){
        return 0;
    }
    
    int p = power(10,k);
    int a = (input[s-1] - '0');
    int val = a * p;
 
    val = val + strToInt(input,s-1,k+1);
    
    return val;
}

int stringToNumber(char input[]) {
    // Write your code here
    
    int size=0;
    for(; input[size]!='\0'; size++){}    
    
    int val = strToInt(input,size,0);
    return val;

}


int main(){
     string str = "2345";

    char arr[str.length()+1];

    for(int i = 0 ; i< sizeof(arr) ; i++){
        arr[i] = str[i];
         }
    
    cout<<stringToNumber(arr);
}



