// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, *ptr, n2;
  printf("Enter number of elements.\n");
  scanf("%d", &n);
  ptr = (int*) malloc(n * sizeof(int));
  if(ptr == NULL)
  {
    printf("Error! memory not allocated.");
    exit(0);
  }
  printf("Memory seccussfully allocated using malloc().\n");
  ptr = (int*) calloc(n, sizeof(int));
  if(ptr == NULL)
  {
    printf("Error! memory not allocated.");
    exit(0);
  }
  printf("Memory seccussfully allocated using calloc().\n");
  ptr = realloc(ptr, n2 * sizeof(int));
  if(ptr == NULL)
  {
    printf("Error! memory not re-allocated.");
    exit(0);
  }
  printf("Memory seccussfully re-allocated using realloc().\n");
  free(ptr);
  return 0;
}
