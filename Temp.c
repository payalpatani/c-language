// QUE 1::-- Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.

// #include <stdio.h>

// int main() {
//     char alphabet = 'a'; 

//     printf("Skipping 3 alphabets:\n");
//     do {
//         printf("%c ", alphabet); 
//         alphabet += 4; 
//     } while (alphabet <= 'z'); 
//     printf("\n");

//     return 0;
// }







// QUE 2::-- Write a Program to count the total number of digits in a number.

// #include <stdio.h>

// int main() {
//     int number, count = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);
   
//     do {
//         count++; 
//         number /= 10; 
//     } while (number != 0);

//     printf("Total number of digits: %d\n", count);

//     return 0;
// }







// QUE 3::--  Write a Program to find the sum of a first and the last digit of a number.


// #include <stdio.h>

// int main() {
//     int num, first, last, sum;

//     printf("Enter a number: ");
//     scanf("%d", &num);  

//     last = num % 10;
//     first = num;
//     while (first >= 10) {
//         first /= 10;
//     }

//     sum = first + last;

//     printf("Sum of the first and the last digit of %d is:\n  %d\n", num, sum);

//     return 0;
// }

