#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int result = a-- / b++; //1/3 = 0
    // switch (a + b)  //1+3=4
    // {
    // case 1:
    //     result += a / c * 2;  
    //     b++;
    // case 2:
    // case 3:
    //     result = a * c / b;
    //     a++;
    // case 4:
    //     break;
    //     a = 2; 
    // default:
    //     result = 5;
    // }
    // printf("%d %d %d %d",
    //        a, b, c, result);
    // return 0;


    //conversion from switch to if-else

    if(a+b== 1 || a+b==2 || a+b==3){
        result = a * c / b;
        a++;
    }else if(a+b==4){
        
    }else{
        result = 5;
    }

     printf("%d %d %d %d",
           a, b, c, result);
    return 0;
}

/*
1 2 3
1 3 3 0


2 2 1
1 3 1 1

5 5 5
4 6 5 5
*/
