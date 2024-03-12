#include <stdio.h>

int main(int argc, char const *argv[]) {
    int start = 105, 
        end = 112, 
        count = 0;
    
    for (int i = end; i >= start; i--) {
        if (end % 2 != 0) {
            count++;
            start++;
            end += 2;
        } else {
            end--;
            start += 1;
        }
        
        printf("Iteration %d: start = %d, end = %d, count = %d\n", i, start, end, count);
    }

    printf("Final values: start = %d, end = %d, count = %d\n", start, end, count);
    return 0;
}


// i=112, 112>=105, true 
//         112%2!=0 false
//         end=111, start=106
// i=111, 111>=106 true 
//         111%2!=0 true 
//         count=1, start=107, end=113
// i=110, 110>=107, true 
//         113%2!=0 true
//         count=2, start=108, end=115
// i=109  109>=108 true 
//         115%2!=0 true
//        count=3, start=109, end=117
// i=108  108>=109 false


//start=109
//end=113
//count=2

