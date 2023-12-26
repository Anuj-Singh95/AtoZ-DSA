#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a,b,count=0;
        scanf("%d",&a);
        scanf("%d",&b);
        for(int j=a;j<=b;j++){
            int x=j;
            while(x!=0){
                if(x%2==1){
                    count++;
                    x=x>>1;
                }else{
                    x=x>>1;
                }
            }
        }
        printf("%d\n",count);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
