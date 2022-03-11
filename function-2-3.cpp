bool is_a_palindrome(int integers[], int length){
    int x;
    if(length%2 == 0){
        x = length/2;
    }else{
        x = (length +1)/2;
    }

    int sum = 0;

    for(int i = 0; i < x; i++){
        int a = length - 1 - i;
        if(integers[i] != integers[a]){
            sum++;
        }
    }

    if(sum==0){
        return 1;
    }else{
        return 0;
    }
}

int sum_elements(int integers[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + integers[i];
    }
    return sum;
}

int sum_if_a_palindrome(int integers[], int length){
    if(length < 1){
        return -1;
    }

    if(is_a_palindrome(integers, length)==1){
        return sum_elements(integers, length);
    }else{
        return -2;
    }
}