#include <iostream>
#include <stdlib.h>

extern void print_scaled_matrix(int array[3][3],int scale);

int main(int argc,char **argv){
    int array[3][3] = {{1,2,3},{2,1,3},{3,2,1}};
    int scale = 3;
    print_scaled_matrix(array, scale);
    return 0;
}