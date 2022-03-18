#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits){
    int sum = 0;
    int f = number_of_digits;
    for(int i = 0; i < number_of_digits; i++){
        f = f-1;
        int n = binary_digits[i] * pow(2,f);
        sum = sum + n;
    }
    return sum;
}