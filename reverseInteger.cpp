// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    int max= 2147483647;
    int min=-2147483648;
    int y=x;
    int reverse=0;
    while (y!=0)
    {
        int digit=y%10;
        y=y/10;
        if((reverse>max/10) || (reverse==max/10 && digit>max%10)){
            return 0;
        }
        if((reverse<min/10) || (reverse==min/10 && digit<min%10)){
            return 0;
        }
        reverse=reverse*10+digit;
    }
    return reverse;
}

int main(){
    printf("reverse= %d",reverse(-1463847412));
    printf("====%d",-23%10);

    return 0;

}