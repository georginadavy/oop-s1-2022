#include <iostream>
void print_scaled_matrix(int array[3][3],int scale){
    for(int i = 0; i < 3; i++){
        int x = 0;
        for(int j = 0; j < 3; j++){
            x = array[i][j] * scale;
            std::cout << x << " " ;
        }
        std::cout << "\n" ;
    }
}