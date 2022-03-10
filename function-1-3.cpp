#include <iostream>
void count_numbers(int array[4][4]){
    int num_zero = 0;
    int num_one = 0;
    int num_two = 0;
    int num_three = 0;
    int num_four = 0;
    int num_five = 0;
    int num_six = 0;
    int num_seven = 0;
    int num_eight = 0;
    int num_nine = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            switch(array[i][j]){
                case 0:
                    num_zero = num_zero + 1;
                    break;
                case 1:
                    num_one = num_one + 1;
                    break;
                case 2:
                    num_two = num_two + 1;
                    break;
                case 3:
                    num_three = num_three + 1;
                    break;
                case 4: 
                    num_four = num_four + 1;
                    break;
                case 5:
                    num_five = num_five + 1;
                    break;
                case 6:
                    num_six = num_six + 1;
                    break;
                case 7:
                    num_seven = num_seven + 1;
                    break;
                case 8:
                    num_eight = num_eight + 1;
                    break;
                case 9:
                    num_nine = num_nine + 1;
                    break;
            }
        }
    }
    std::cout << "0:" << num_zero;
    std::cout << ";1:"<< num_one; 
    std::cout << ";2:"<< num_two;
    std::cout << ";3:"<< num_three;
    std::cout << ";4:"<< num_four;
    std::cout << ";5:"<< num_five;
    std::cout << ";6:"<< num_six;
    std::cout << ";7:"<< num_seven;
    std::cout << ";8:"<< num_eight;
    std::cout << "9:"<< num_nine << ";" << std::endl;
}