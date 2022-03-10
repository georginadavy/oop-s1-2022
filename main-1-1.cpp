#include <iostream>
#include <stdlib.h>

extern int diagonal(int array[4][4]);

int main(int argc,char **argv){
    int array[4][4] = {{1,2,3,4},{2,1,3,4},{3,2,1,4},{4,3,2,1}};
    std::cout << "The main diagonal sum is: " << diagonal(array) << std::endl;
    return 0;
}
    