#include <stdio.h>
void read_array(int arr[], int n);
int sum(int *ptr, int sum, int n);
int main ()
{
  int n, count;
  printf("Enter the number of elements in the array.\n");
  scanf("%d",&n);
  int s, arr[n];
  printf("Enter the number you want to check against.\n");
  scanf("%d",&s);
  printf("Enter the array.\n");
  read_array(arr, n);
  int *ptr = NULL;
  ptr = &arr[0];
  count = sum(ptr, s, n);
  printf("The result is: %d.",count);
  return 0;
}
void read_array(int arr[], int n)
{
  int i;
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}
int sum(int *ptr, int sum, int n)
{
  int i, j, count = 0;
  for(i=0;i<n/2;i++)
  {
    for(j=0;j<n;j++)
    {
      if (*(ptr+i) + *(ptr+j) == sum)
        count++;
    }
  }
  return count;
}
