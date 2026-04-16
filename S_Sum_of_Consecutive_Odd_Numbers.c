#include<stdio.h>
int main(){

//S. Sum of Consecutive Odd Numbers

    int t;
    scanf("%d",&t);

    for(int i = 1;i<=t;i++){
int a,b,max,min,sum = 0;
scanf("%d%d",&a,&b);
if(a>b){
    max = a;
    min = b;
}
else{
    max = b;
    min = a;
}

for(int i = min+1; i<max;i++){

if(i%2!=0){
    sum = sum + i;
}

}
printf("%d\n",sum);



    }
    
return 0;
}