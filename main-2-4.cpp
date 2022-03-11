#include <stdlib.h>
#include <iostream>

extern int sum_min_and_max(int integers[], int length);

int main(){
    int array[] = {1,2,3,4,5};
    int length = sizeof(array)/4;

    if(sum_min_and_max(array,length) == -1){
        std:: cout << "The array is invalid" << std :: endl;
    }else{
        std:: cout << "The sum of the maximum and minimum is: " << sum_min_and_max(array, length) << std :: endl;
    }
    return 0;
}