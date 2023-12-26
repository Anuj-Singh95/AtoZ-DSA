#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    scanf("%d",&n);
    scanf("%d",&q);
    char s[1001];
        scanf("%s",s);
    for(int i=0;i<q;i++){
        int l,r;
    scanf("%d",&l);
    scanf("%d",&r);
    int min=123;
    for(int i=l-1;i<r;i++){
        if(s[i]<min){
            min=s[i];
        }
    }
    printf("%c\n",min);
    }
    
    
    return 0;
}
