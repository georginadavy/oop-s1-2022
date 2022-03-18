#include <stdlib.h>
#include <iostream>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
    int array[] = {1,0,0,1,0,1,1};
    int length = sizeof(array)/4;

    std::cout << "The decimal value of the binary array is: " << binary_to_number(array, length) << std::endl;
    return 0;
}