int identity(int array[10][10]){
    int x = 0;
    for(int i = 0; i < 10; i++){
        if(array[i][i] == 1){
            x = x + 1;
        }
        for(int j = 0; j < 10; j++){
            if(array[i][j]!=0){
                x = x + 1;
            }
        }
    }
    if(x==20){
        return 1;
    }else{
        return 0;
    }
}