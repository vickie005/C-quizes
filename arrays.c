// 2D array
#include <stdio.h>

int main() {
    // Declare and initialize the 2D array
    int scores[2][4] = {
        {65, 92, 84, 72}, 
        {35, 70, 59, 67}
    };

    // Print the elements using nested for loops
    printf("Scores Array:\n");
    for (int i = 0; i < 2; i++) {          // Loop through rows
        for (int j = 0; j < 4; j++) {      // Loop through columns
            printf("%d ", scores[i][j]);   // Print each element
        }
        printf("\n");                      // Move to the next line after each row
    }

    return 0;
}
