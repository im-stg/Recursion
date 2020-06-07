#include<iostream>

#include<cstring>

using namespace std;

 int start = 0;

char *helper(string str,int s , int e){
   
    int size = e-s;
    char* out = new char[size+1]; 

     
    for(int i = 0 ; i < size ; i++){
        out[i] = str[s];
        cout<<out[i]<<" ";
        s++;
    }
    cout<<endl;
    return out;
}

bool checkPalindrome(char input[]) {
    // Write your code here
    string s(input);
    int size = s.length();
   
    cout<<s<<" ";
    cout<<size<<" ";
    if(s[0] == s[size-1])
    
    {         
        if(size > start)
        bool isPalindrome = checkPalindrome(helper(s,start+1,size -1));
    }
    else 
    return false;

    return true;

}

int main(){
    string str = "racecar";

    char arr[str.length()+1];

    for(int i = 0 ; i< sizeof(arr) ; i++){
        arr[i] = str[i];
        cout<<arr[i] << " ";
    }
    
    cout<<checkPalindrome(arr);
}



