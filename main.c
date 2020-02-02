//Notes here
int max(int x, int y);
int main(){
    int result;
    result = max(44, 5);
    printf("%d\n", result);
    return 0;
    
}
int max(int x, int y){
    
    int maxn;
    if (x > y)
        maxn = x;
    else
        maxn = y;
    
    return maxn;
}
