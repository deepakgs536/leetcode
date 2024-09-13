int finbnacci(int n,int array[]){
    if(n==0) return 0;
    if(n==1) return 1;
    if(array[n] != 0) return array[n];
    int temp = finbnacci(n-1,array) + finbnacci(n-2,array);
    array[n] = temp;
    return temp;
}

int fib(int n){
    int array[n+1] ;
    memset(array,0,sizeof(array));
    return (finbnacci(n,array));
}