#include <stdlib.h>
#include <iostream>

extern int sum_if_a_palindrome(int integers[], int length);

int main(){
    int array[] = {2,1,1,1};
    int length = sizeof(array)/4;
    if(sum_if_a_palindrome(array, length) == 2){
        std::cout<< "The array is not a palindrome" <<std::endl;
    }else{
        std::cout<< "The sum of the palindrome is: "<< sum_if_a_palindrome(array, length)<<std::endl;
    }
    return 0;

}