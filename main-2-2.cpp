#include <iostream>
#include <stdlib.h>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(int argc,char **argv){
    int array[] = {1,0,0,1,0,1,1};
    int n;
    n = sizeof(array)/4;
    std::cout << "Integer value of binary: " << binary_to_number(array, n) << std::endl;
    std::cout << n << std::endl;
    return 0;
}