/* infiniteloop
   Practical 3 
   Sneha Yadav */
#include <stdio.h>
int main() {
    int j = 10;  // Use signed integer
    while (j >= 0) {
        printf("%d ", j);
        j--;
    }
    printf("\nLoop completed safely!\n");
    return 0;
}
