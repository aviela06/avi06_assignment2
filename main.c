#include <stdio.h>
#include <math.h>
#include "statistics.h"
#include "output_array.h"

int main() {

 int array [10] ;
   int size = sizeof(array) / sizeof(array[0]);

   printf("Enter 10 numbers: ");
      for(int i = 0; i < size; i++) {
         scanf("%d" ,&array[i]);
      }

    printf("Array: ");
    output_array(array, size);

    printf("Sum: %d\n", sum(array, size));
    printf("Average: %.2f\n", average(array, size));
    printf("Standard Deviation: %.2f\n", standard_deviation(array, size));
    printf("Max: %d\n", max(array, size));
    printf("Min: %d\n", min(array, size));
    printf("Range: %d\n", range(array, size));

    return 0;
}
