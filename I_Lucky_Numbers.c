#include<stdio.h>
int main(){

    //I. Lucky Numbers

    long long n,fast,last;
    scanf("%lld",&n);

    last = n%10;
    fast = n/10;
if (last == 0) {
        printf("YES\n");
}
   else if(fast%last==0 || last%fast==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

return 0;
}