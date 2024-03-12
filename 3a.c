#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1 || j==n-i-1 || j==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    for(int i=n/2;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(j==0 || j==n-1 || i==j && i==n/2){
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }


}