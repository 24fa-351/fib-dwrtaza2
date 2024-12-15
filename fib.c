// Name: Dominic Wrtaza
// Date: 9/20/2024
// File Purpose: To perform the Fibonacci sequence

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
unsigned long int fibonacci_iterative(unsigned long int num) {
  if (num <= 1) {
    return num;
  }
  unsigned long int a0 = 0, b0 = 1, temp0;
  for (unsigned long int i0 = 2; i0 <= num; i0++) {
    temp0 = a0 + b0;
    a0 = b0;
    b0 = temp0;
  }
  return b0;
}

unsigned long int fibonacci_recursive(unsigned long int num) {
  if (num <= 1) {
    return num;
  }
  return fibonacci_recursive(num - 1) + fibonacci_recursive(num - 2);
}

int main(unsigned long int argc, char *argv[]) {
  // Convert the first argument to an unsigned long integer
  unsigned long int first_num = atoi(argv[1]);

  FILE *file = fopen(argv[3], "r");
  unsigned long int file_num;
  fscanf(file, "%ld", &file_num);
  fclose(file);

  unsigned long int sum_of_firstNum_fileNum = first_num + file_num - 1;
=======
unsigned long int fibonacci_iterative(unsigned long int nx) {
    if (nx <= 1) {
        return nx;
    }
    unsigned long int ax= 0, bx= 1, temp;
    for (unsigned long int i = 2; i <= nx; i++) {
        temp = ax+ bx;
        ax= bx;
        bx= temp;
    }
    return bx;
}

unsigned long int fibonacci_recursive(unsigned long int nx) {
    if (nx <= 1) {
        return nx;
    }
    return fibonacci_recursive(nx - 1) + fibonacci_recursive(nx - 2);
}

int main(int argc, char *argv[]) {
    // Convert the first argument to an unsigned long unsigned long integer
    unsigned long int first_num = atoi(argv[1]);

    FILE *file = fopen(argv[3], "r");
    unsigned long int file_num;
    fscanf(file , "%ld", &file_num);
    fclose(file);

    unsigned long int sum_of_firstNum_fileNum = first_num + file_num - 1;
>>>>>>> f26352b8a4f45ca8c6307be64b836dd934e8e33a

  unsigned long int result;
  if (argv[2][0] == 'r') {
    result = fibonacci_recursive(sum_of_firstNum_fileNum);
  } else if (argv[2][0] == 'i') {
    result = fibonacci_iterative(sum_of_firstNum_fileNum);
  } else {
    return 1;
  }

<<<<<<< HEAD
  printf("%ld\n", result);

  return 0;
}
=======
    printf("%ld\n", result);

    return 0;
}
>>>>>>> f26352b8a4f45ca8c6307be64b836dd934e8e33a
