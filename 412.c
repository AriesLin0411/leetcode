/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
char** result=(char**)malloc(sizeof(char*)*n);
char* fb="FizzBuzz";
char* f="Fizz";
char* b="Buzz";
for(int i=1;i<=n;i++){
    if(i%15==0)
    result[i-1]=fb;
    else if (i%3==0)
    result[i-1]=f;
    else if (i%5==0)
    result[i-1]=b;
    else{
        result[i-1]=malloc(6);
        sprintf(result[i-1], "%d" , i);
    }
}
*returnSize = n;
return result;
}