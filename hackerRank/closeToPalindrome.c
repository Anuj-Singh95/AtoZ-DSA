#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPalindrome(int n){
    int x=n,p=0;
    while(x!=0){
        p=p*10+x%10;
        x/=10;
    }
    if(p==n) return 1;
    else return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int numr=n, numl=n;
    if(isPalindrome(n)){
        printf("%d",n);
        return 0;
    }
    for(int i=n;i<10000;i++){
        if(isPalindrome(i)){
            numr=i;
            break;
        }
    }
    for(int i=n;i>=0;i--){
        if(isPalindrome(i)){
            numl=i;
            break;
        }
    }
    
    
    if(n-numl <= numr-n){
        printf("%d",numl);
    }else{
        printf("%d",numr);
    }
    return 0;
}
