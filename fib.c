// Name: Dominic Wrtaza
// Date: 9/4/2024
// File Purpose: To perfrom the Fibonacci sequence

#include <stdio.h>
#include <stdlib.h>

int fibonacci_iterative(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main(int argc, char *argv[]) {
    
    // Convert the first argument to an integer
    int first_num = atoi(argv[1]);

    FILE *file = fopen(argv[3], "r");
    int file_num;
    fscanf(file, "%d", &file_num);
    fclose(file);

    int sum_of_firstNum_fileNum = first_num + file_num - 1 ;

    int result;
    if (argv[2][0] == 'r') {
        result = fibonacci_recursive(sum_of_firstNum_fileNum);
    } else if (argv[2][0] == 'i') {
        result = fibonacci_iterative(sum_of_firstNum_fileNum);
    } else {
        return 1;
    }

    printf("%d\n", result);


    return 0;
}
