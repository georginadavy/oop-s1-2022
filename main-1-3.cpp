#include <iostream>
#include <stdlib.h>

extern void count_numbers(int array[4][4]);

int main(int argc,char **argv){
    int array[4][4] = {{1,2,3,4},{2,1,3,4},{3,2,1,4},{4,3,2,1}};
    count_numbers(array);
    return 0;
}