#Maximum of n numbers

#Problem-
I needed to find the largest value out of a dynamic list of numbers while handling edge cases like zero inputs gracefully.

#What I built-
A C program that takes the count n, reads the first number to establish a baseline maximum, and then loops through the remaining inputs to track the highest value.

#How it works-
Enter the total count (n).Check if n is non-zero.Read the first number and set it as the initial maximum.Loop through the remaining numbers, updating the maximum if a larger value is found.Print the final result or handle the empty case.

#How I tested it-
I tested it with n = 4 and the numbers 42, 105, 12, and 89.
The output was 105.
I also tested an empty count (n = 0).

#What I learned-
Initializing a tracking variable with the first valid input rather than a hardcoded zero prevents bugs with negative numbers, and checking conditions safely handles empty datasets.

#Limitations-
The program does not validate user input and can behave incorrectly if non-numeric characters are entered.
