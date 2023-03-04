#include<stdio.h>

/**
 * Giving 3 numbers, print the number with the most even digits.
 */

int main(){

    int number_1, number_2, number_3, count, max = 0, number, copy_number;

    // Number 1 value from keyboard
    printf("Enter value of number_1:");
    scanf("%d", &number_1);

    // Number 2 value from keyboard
    printf("Enter value of number_2:");
    scanf("%d", &number_2);

    // Number 3 value from keyboard
    printf("Enter value of number_3:");
    scanf("%d", &number_3);

    // Count how many even digits each number has

    // Number 1
	count = 0;
	copy_number = number_1;
    while (number_1 != 0) {
        if ((number_1 % 10) % 2 == 0){
            count++;
        }
        number_1 /= 10;
    }

	if (count > max) {
		max = count;
		number = copy_number;
	}

    // Number 2
	count = 0;
	copy_number = number_2;
    while (number_2 != 0) {
        if ((number_2 % 10) % 2 == 0){
            count++;
        }
        number_2 /= 10;
    }

	if (count > max) {
		max = count;
		number = copy_number;
	}

    // Number 3
	count = 0;
	copy_number = number_3;
    while (number_3 != 0) {
        if ((number_3 % 10) % 2 == 0){
            count++;
        }
        number_3 /= 10;
    }

	if (count > max) {
		max = count;
		number = copy_number;
	}

    // Printing how many even digits each number has
    printf("Max count even digits: %d\n", count);

	printf("Result: %d\n", number);

    return 0;  
    
}