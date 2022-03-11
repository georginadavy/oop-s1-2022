int min_integer(int integers[], int length){
    int min = integers[0];
    for(int i = 1; i < length; i++){
        if(integers[i] < min){
            min = integers[i];
        }
    }
    return min;
}

int max_integer(int integers[], int length){
    int max = integers[0];
    for(int i = 1; i < length; i++){
        if(integers[i] > max){
            max = integers[i];
        }
    }
    return max;
}

int sum_min_and_max(int integers[], int length){
    if(length < 1){
        return -1;
    }else{
        return min_integer(integers, length) + max_integer(integers, length);
    }
}