#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip the remaining code for even values of i
        }
        
        printf("%d ", i);
    }
    
    printf("\nLoop finished!\n");
    return 0;
}
