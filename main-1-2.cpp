#include <iostream>
#include <stdlib.h>

extern int identity(int array[10][10]);

int main(int argc,char **argv){
    int array[10][10] = {{1,0,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,1,0,0,0,0},{0,0,0,0,0,0,1,0,0,0},{0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,1}};
    if(identity(array)==1){
        std::cout <<"The matrix is an identity matrix" << std::endl;
    }else{
        std::cout <<"The matrix is not an identity matrix" << std::endl;
    }
    return 0;
}