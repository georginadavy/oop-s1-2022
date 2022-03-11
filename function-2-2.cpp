#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits){
    int number = 0;
    int n = number_of_digits;
    for(int i = 0; i < number_of_digits; i++){
        n = n - 1;
        int x = binary_digits[i] * pow(2,n);
        number = number + x;
    }
    return number;
}