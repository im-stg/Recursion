#include <iostream>
using namespace std;

    int s = 0;
int sizeOfInput(char *input){
    int size = 0;
    for(;input[size]!='\0';size++){}
    return size;
}

void shift(char *input, int size, int sp){
    size+=1;
    int i = 0;
    for(i = size ; i > 0; i--){
        input[i+1] = input[i];
    }
    input[sp+1] = '*';
}
    

void pairStar(char input[]) {
    // Write your code here
    int size = sizeOfInput(input);

    
    if(size == 0)
        return;
    
    if(input[s] == input[s+1]){
        shift(input,size-1,s);      
    }

      pairStar(input+1);
}

int main()
{
    char arr[1000] = "pxxppbb" ;

   
    pairStar(arr);
    int siz = 0;
    cout << arr;
}