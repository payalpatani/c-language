// QUE ::--1 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

// #include <stdio.h>

// int main() {
//     int num1, num2, num3, min;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

//     printf("Minimum number is: %d\n", min);

//     return 0;
// }




// QUE ::--2 Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

// #include <stdio.h>

// int main() {
//     int language_choice, recharge_choice;

//     printf("Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\nEnter your choice: ");
//     scanf("%d", &language_choice);

//     switch (language_choice) {
//         case 1:
//             printf("\nYou've chosen English.\n");
//             break;
//         case 2:
//             printf("\nYou've chosen Hindi. \n");
//             break;
//         case 3:
//             printf("\nYou've chosen Gujarati.\n");
//             break;
//         default:
//             printf("\nInvalid choice!\n");
//             return 1; 
//     }

//     printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ");
//     scanf("%d", &recharge_choice);

//     switch (recharge_choice) {
//         case 1:
//             printf("\nYou have successfully done Internet Recharge.\n");
//             break;
//         case 2:
//             printf("\nYou have successfully done Top-up Recharge.\n");
//             break;
//         case 3:
//             printf("\nYou have successfully done Special Recharge.\n");
//             break;
//         default:
//             printf("\nInvalid choice!\n");
//             return 1; 
//     }

//     return 0;
// }

