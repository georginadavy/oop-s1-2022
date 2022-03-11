#include <iostream>
#include <stdlib.h>

extern void print_as_binary(std::string decimal_number);

int main(int argc,char **argv){
    std::string decimal = "75";
    print_as_binary(decimal);
    return 0;
}