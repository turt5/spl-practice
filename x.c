#include<stdio.h>
int main(int argc, char const *argv[])
{
    float sum=0;

    for(int i=10,j=1;i>0;i+=2,j++){
        sum+=(i-j);
    }

    printf("%f",sum);
    return 0;
}
