#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,count=0,res=1;
    scanf("%d",&n);
    while(n>9){
        res=1;
        while(n!=0){
            res=res*(n%10);
            n/=10;
        }
        n=res;
        count++;
    }
    printf("%d",count);
    return 0;
}
