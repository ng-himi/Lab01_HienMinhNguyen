#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, y;
    int t;
    
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);

    if (x > y) {
        t = 0;
        x = 10;
    } else {
        t = 1;
        x = 5;
    }
    
    printf("x = %d, t = %d\n", x, t);
    return 0;
}
