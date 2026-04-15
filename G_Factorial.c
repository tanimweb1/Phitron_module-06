#include<stdio.h>
int main(){

//G. Factorial

    int t;
    scanf("%d",&t);

    for(int i = 1;i<=t;i++){

int n;
long long int fact=1;
scanf("%d",&n);

for(int i = 1;i<=n;i++){
    fact = fact * i;
}


printf("%lld\n",fact);

    }
return 0;
}