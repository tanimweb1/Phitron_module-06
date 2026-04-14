#include<stdio.h>
int main(){

    //B. Even Numbers

int n;
scanf("%d",&n);

for(int i = 1; i<=n;i++){
    if(i%2==0){
        printf("%d\n",i);
    }
}

return 0;
}