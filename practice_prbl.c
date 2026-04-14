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
