int diagonal(int array[4][4]){
    int sum = 0;
    for(int i = 0; i < 4; i++){
        int x = array[i][i];
        sum = sum + x;
    }
    return sum;
}

