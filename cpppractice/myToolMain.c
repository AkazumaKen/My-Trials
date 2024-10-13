#include<stdio.h>

void Choices(){
	
	 int rows = 10;
    int columns = 20;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 0 || i == rows - 1) {
                // Print underscores for the first and last rows
                printf("_");
            } else if (j == 0 || j == columns - 1) {
                // Print vertical bars for the first and last columns
                printf("|");
            } else {
                // Print spaces for the inner cells
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
}
