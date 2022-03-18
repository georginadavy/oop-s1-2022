#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits){
    int sum = 0;
    for(int i = 0; i < number_of_digits; i++){
        if(binary_digits[i] == 0){
            int x = pow(2,i);
            sum = sum + x;
        }else{
            int x = pow(2,i) + 1;
            sum = sum + x;
        }
    }
    return sum;
}