#include<stdio.h>
int main(){

    //B. Even Numbers

int n;
scanf("%d",&n);
if(n==1){
    printf("-1");
}
for(int i = 1; i<=n;i++){
    if(i%2==0){
        printf("%d\n",i);
    }
}

return 0;
}




#include <stdio.h>
int main()
{

//C. Even, Odd, Positive and Negative
    
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (a >= 1)
        {
            pos++;
        }
        else if (a < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}






#include<stdio.h>
int main(){

    //D. Fixed Password
   int n;
   while(scanf("%d",&n)){

if(n==1999){
    printf("Correct\n");
    break;
}
else{
    printf("Wrong\n");
}



   }


return 0;
}







#include<stdio.h>
int main(){

//Multiplication Table

    int n;
    scanf("%d",&n);

    for(int i = 1;i<=12;i++){
printf("%d * %d = %d\n",n,i,n*i);

    }

return 0;
}






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





#include<stdio.h>
int main(){

    //K. Divisors
    int n;
    scanf("%d",&n);

    for (int i = 1; i<=n;i++){

        if(n%i==0){
            printf("%d\n",i);
        }


    }
    
return 0;
}





#include<stdio.h>
int main(){

    //C. Next Alphabet
    char ch;
    scanf("%c",&ch);

if(ch=='z'){
    printf("a");
}

else if(ch>='a' && ch<='z')
    {
printf("%c",ch+1);
    }
     
    
  
return 0;
}
