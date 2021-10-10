int arrangeCoins(int n){
double sum=0;
int i=0;
while(sum<n){
i++;    
sum=sum+i;
} 
if(n==sum){
    return i;
}
else{
    return i-1;
}
}