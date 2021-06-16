/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>
int max(int arr[],int count){
  int max = 0;
  for(int i=0; i<count; i++)
  {
    if(max < arr[i])
    {
      max=arr[i];
    }
  }
  return max;
}

int min(int arr[],int count){
  int min = arr[1];
  for(int i=0; i<count; i++)
  {
    if(min > arr[i])
    {
      min=arr[i];
    }
  }
  return min;
}

float average(int arr[],int count){
  float average = 0;
  for (int i = 0; i < count; i++) {
    average+=arr[i];
  }
  average = average/count;
  return average;
}

int mode(int arr[],int count){
  int max_count=0;
  int max_value=0;
  int count_here;
  for (int i = 0; i < count; i++) {
    count_here = 0;
    for (int j = 0; j < count; j++) {
      if(arr[i] == arr[j]){
        count_here++;
      }
    }
    if(max_count < count_here){
      max_count = count_here;
      max_value = arr[i];
    }
  }
  return max_value;
}

int factors(int num,int f[]){
  int i = 0;
  while(num % 2 ==0){
    f[i]=2;
    i++;
    num = num/2;
  }
  for (int j = 3; j < sqrt(num); j+=2) {
    while(num % j == 0){
      f[i] = j;
      i++;
      num = num/j;
    }
    if (num > 2)
      f[i]=num;
  }
  return i+1;
}
