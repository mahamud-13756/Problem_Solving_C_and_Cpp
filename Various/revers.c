#include <stdio.h> // Include the standard input/output header file.

int main(){
    int num, r, sum = 0, t; // Declare variables for the original number, remainder, reversed number, and temporary variable.

    printf("Input a number: "); // Prompt the user to input a number.
    scanf("%d", &num); // Read the input from the user.

    for(t = num; num != 0; num = num / 10){ // Loop to reverse the digits of the number.
         r = num % 10; // Extract the last digit (remainder when divided by 10).
         sum = sum * 10 + r; // Build the reversed number by adding the extracted digit.
    }

    printf("The number in reverse order is : %d \n", sum); // Print the reversed number.
   return 0;  // Indicate that the program has executed successfully.
}