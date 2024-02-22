// QUE 1::--Write a Program to check whether a number is even or odd using the ternary operator.

// #include <stdio.h>
// int main()
// {
//     int no;

//     printf("Enter any number:");
//     scanf("%d", &no);

//     printf("This number is %s\n", (no % 2 == 0) ? "Even" : "Odd");
   
//     return 0;
// }









// QUE 2::--Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:

// #include <stdio.h>
// main()
// {
//     int units;
//     float bill, total;

//     printf("Enter electricity units: ");
//     scanf("%d", &units);

//     if (units <= 50)
//     {
//         total = 50 * 0.50;
//     }
//     else if (units <= 150)
//     {
//         total = 50 * 0.50 + (units - 100) * 0.75;
//     }
//     else if (units <= 250)
//     {
//         total = 50 * 0.50 + 100 * 0.75 + (units - 100) * 1.20;
//     }
//     else
//     {
//         total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
//     }

//     bill = total + total * 0.20;

//     printf("Electricity Bill = Rs. %.2f", bill);
// }