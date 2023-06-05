#include <stdio.h>

int main() {
    int term = 1;  // Starting term of the sequence
    
    for (int i = 1; i < 6; i++) {
        printf("%d ", term);
        term = (term * 3) + 0;
    }
    
    return 0;
}