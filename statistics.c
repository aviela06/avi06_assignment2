#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "statistics.h"
#include <stdlib.h>

float average(int array[], int size){

   float num=0;
   for(int i = 0; i < size; i++) {
      num=num + array[i];
   }
   
   return num/size;
}

double standard_deviation(int array[], int size){

   double n=0.0, mean, var=0.0;

   for(int i=0; i<size; i++){
	n +=array[i];
	}

	mean = n/size;

	 for(int i=0; i<size; i++){
        var += (array[i]-mean) * (array[i] - mean);
	}

	var = var/(size - 1);
	return sqrt(var);
}

int sum(int array[], int size){
   
   int sum = 0;
   
   for(int i=0; i<size; i++){
	sum += array[i];
	}
 
   return sum;
}


int max(int array[], int size) {
    int num = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > num) {
            num = array[i];
        }
    }
    return num;
}

int min(int array[], int size) {
    int num = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < num) {
            num = array[i];
        }
    }
    return num;
}

int range(int array[], int size) {
    int max_val = max(array, size);
    int min_val = min(array, size);
    return abs(max_val - min_val);
}
