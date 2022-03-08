// Group members : georgina davy and Tharin
#include <iostream>
#include <stdlib.h>
#include <cmath>

void transform(int n){
    int array[100];
    int x = 0;
    while(n!=0){
        if(n%2==0){
            array[x] = 0;
            x = x + 1;
            n = n/2;
        }
        else{
            array[x] = 1;
            x = x + 1;
            n = (n-1)/2;
        }
    }
    for(int i = x-1;i >= 0;i--){
        std::cout << array[i];
    }
}

int main(){
    int n;
    std::cout << "Enter a number: \n";
    std::cin >> n ;
    transform(n);
    return 0;
}