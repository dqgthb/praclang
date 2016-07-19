#include<stdio.h>

int power(int, int);

int main(){
    
    int n,sum=0, temp, remainder, digits = 0;
    
    printf("Input an integer\n");
    scanf("%d",&n);

    temp = n;
    //Count number of digis
    while (temp != 0) {
	digits ++;
	temp = temp/10;
    }

    temp = n;

    while (temp != 0) {
	remainder = temp%10;
	sum = sum+power(remainder, digits);
	temp=temp/10;
    }
    printf("n=%d",n);
    printf("\n");
    printf("sum=%d\n",sum);

    if(n==sum)
	printf("%d is an Armstrong number.\n", n);
    else
	printf("%d is not an Armstrong number.\n",n);

    return 0;
}

int power(int n, int r) {
    int c, p = 1;

    for (c=1; c <= r; c++)
	p=p*n;

    return p;
}
