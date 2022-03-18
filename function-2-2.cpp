#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits){
    int sum = 0;
    int f = number_of_digits - 1;
    for(int i = 0; i < number_of_digits; i++){
        if(binary_digits[i] == 0){
            int x = pow(2,f);
            sum = sum + x;
            f--;
        }else{
            int x = pow(2,f) + 1;
            sum = sum + x;
            f--;
        }
    }
    return sum;
}