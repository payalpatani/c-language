// QUE 1 ::-- Write a Program to print 1 to 10 using a do-while loop.

// #include <stdio.h>

// int main() {
//     int num = 1; 

//     do {
//         printf("%d\n", num); 
//         num++; 
//     } while (num <= 10); 
//     return 0;
// }





// QUE 2 ::-- Write a Program to print 10 to 1 using for loop.
 
//  #include <stdio.h>

// int main() {
   
//     for (int num = 10; num >= 1; num--) {
//         printf("%d\n", num); 
//     }

//     return 0;
// }





// QUE 3::-- Write a Program to print even numbers from 1 to N using a do-while loop.

// #include <stdio.h>

// int main() {
//     int N, num = 2; 

//     printf("Enter the value of N: ");
//     scanf("%d", &N);
//     printf("Even numbers from 1 to %d:\n", N);

//     // Start a do-while loop
//     do {
//         printf("%d\n", num); 
//         num += 2;
//     } while (num <= N);

//     return 0;
// }




// que 4 ::--  Write a Program to print the fibonacci series up to N numbers using for loop.

// #include <stdio.h>

// int main() {
//     int N, first = 0, second = 1, next;

//     printf("Enter the number of Fibonacci series: ");
//     scanf("%d", &N);

//     printf("series up to %d terms:\n", N);

//     for (int i = 0; i < N; i++) {
//         if (i <= 1)
//             next = i;
//         else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         printf("%d, ", next);
//     }
//     printf("\n");

//     return 0;
// }
