#include <iostream>
using namespace std;

int main(){
    int arr1[] = {2,3,4,6,7,8};
    int arr2[]= {1,5,9,12,14,28};

    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);

    int sorted[s1+s2];

    int i = 0, j=0, k=0;
    while(i<s1 && j<s2){
        if(arr1[i] < arr2[j])
        {
            sorted[k] = arr1[i];
            i++;
            k++;
        }
        else{
            sorted[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i<s1){
        sorted[k] = arr1[i];
        i++;
        k++;
    }

        while(j<s2){
        sorted[k] = arr2[j];
        j++;
        k++;
    }

    for(int c = 0; c < sizeof(sorted)/sizeof(sorted[0]); c++){
        cout<<sorted[c] << " ";
    }

 }