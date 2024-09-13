// Name: Dominic Wrtaza
// Date: 9/4/2024
// File Purpose: To perfrom the Fibonacci sequence

#include <stdio.h>
#include <stdlib.h>

unsigned long int fibonacci_iterative(unsigned long int n) {
    if (n <= 1) {
        return n;
    }
    unsigned long int a = 0, b = 1, temp;
    for (unsigned long int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

unsigned long int fibonacci_recursive(unsigned long int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main(unsigned long int argc, char *argv[]) {
    
    // Convert the first argument to an unsigned long unsigned long integer
    unsigned long int first_num = atoi(argv[1]);

    FILE *file = fopen(argv[3], "r");
    unsigned long int file_num;
    fscanf(file, "%ld", &file_num);
    fclose(file);

    unsigned long int sum_of_firstNum_fileNum = first_num + file_num - 1 ;

    unsigned long int result;
    if (argv[2][0] == 'r') {
        result = fibonacci_recursive(sum_of_firstNum_fileNum);
    } else if (argv[2][0] == 'i') {
        result = fibonacci_iterative(sum_of_firstNum_fileNum);
    } else {
        return 1;
    }

   printf("%ld\n", result);


    return 0;
}
