#include <iostream>
void print_summed_matrices(int array1[3][3],int array2[3][3]){
    for(int i = 0; i < 3; i++){
        int x = 0;
        for(int j = 0; j < 3; j++){
            x = array1[i][j] + array2[i][j];
            std::cout << x << " " ;
        }
        std::cout << "\n" ;
    }
}