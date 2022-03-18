bool is_a_palindrome(int integers[], int length){
    int n;
    if(length%2 == 0){
        n = length/2;
    }else{
        n = (length + 1)/2;
    }

    int error = 0;

    for(int i = 0; i < n; i++){
        int a = length - 1 - i;
        if(integers[i] != integers[a]){
            error = error + 1;
        }
    }

    if(error == 0){
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
    if(is_a_palindrome(integers,length)==0){
        return 2;
    }else{
        return sum_elements(integers, length);
    }
}