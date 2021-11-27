#include <stdio.h>
#include <stdlib.h>

typedef struct Array
{
  int *A, size, length;
} array;

void Display(array);
void Append(array *, int);
void Insert(array *, int, int);
void Delete(array *, int);
int Search(array, int);
void Swap(int *, int *);
void Get(array, int);
void Set(array *, int, int);
void Max(array);
void Min(array);
void Sum(array);
void Reverse(array *);
void LeftShift(array *, int);
void RightShift(array *, int);

int main()
{
  int n, i, x, ch;
  array arr;

  printf("Enter the size of the array.\n");
  scanf("%d",&arr.size);
  arr.A = (int *)malloc(arr.size * sizeof(int));
  printf("Enter the number of elements.\n");
  scanf("%d",&n);
  printf("Enter the elements.\n");
  for(i=0; i<n; i++)
    scanf("%d",&arr.A[i]);
  arr.length = n;

  while(1)
  {
    printf("Enter the operation you want to do.\n1. Display\n2.Append\n3.Insert\n4. Delete(from index)\n5. Search\n6. Get\n7. Set\n8. Max\n9. Min\n10. Sum\n11. Reverse\n");
    printf("12. Left Shift\n13. Right Shift\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: Display(arr); break;
      case 2: printf("\nEnter the element you want to add.\n");
              scanf("%d",&x);
              Append(&arr, x);
              break;
      case 3: printf("Enter the element and the index you want to insert it on.\n");
              scanf("%d%d",&x,&i);
              Insert(&arr, i, x);
              break;
      case 4: printf("Enter the index you want to delete the element at.\n");
              scanf("%d",&i);
              Delete(&arr, i);
              break;
      case 5: printf("Enter the element you want to search.\n");
              scanf("%d",&x);
              i = Search(arr, x);
              if(i)
                printf("The element is present at index: %d.\n",i);
              else
                printf("The element is not present.\n");
              break;
      case 6: printf("Enter the index you want to check.\n");
              scanf("%d",&i);
              Get(arr, i);
              break;
      case 7: printf("Enter the index and element you want to set.\n");
              scanf("%d%d",&i,&x);
              Set(&arr, i, x);
              break;
      case 8: Max(arr); break;
      case 9: Min(arr); break;
      case 10: Sum(arr); break;
      case 11: Reverse(&arr); break;
      case 12: printf("Enter the number of times you want to left shift.\n");
              scanf("%d",&x);
              LeftShift(&arr, x);
              break;
      case 13: printf("Enter the number of times you want to right shift.\n");
               scanf("%d",&x);
               RightShift(&arr, x);
               break;
      default: printf("Enter a valid choice.\n");
    }
    printf("\nEnter 1 to continue and anything else to exit.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
}

void Display(array arr)
{
  int i;
  for(i=0; i<arr.length; i++)
    printf("%d ",arr.A[i]);
}

void Append(array *arr, int x)
{
  if (arr->length == arr->size)
    printf("No space availabe.\n");
  else
    arr->A[arr->length++] = x;
}

void Insert(array *arr, int index, int x)
{
  int i;
  if (index >= 0 && index <= arr->length)
  {
    for(i=arr->length; i>index; i--)
      arr->A[i] = arr->A[i-1];
    arr->A[index] = x;
    arr->length++;
  }
  else
    printf("Invalid index.\n");
}

void Delete(array *arr, int index)
{
  int i;
  if(index >= 0 && index < arr->length)
  {
    printf("The element deleted is: %d.\n",arr->A[index]);
    for(i=index; i<arr->length-1; i++)
      arr->A[i] = arr->A[i+1];
    arr->length--;
  }
  else
    printf("Invalid index.\n");
}

int Search(array arr, int x)
{
  int i;
  for(i=0; i<arr.length; i++)
  {
    if (arr.A[i] == x)
    {
      Swap(&arr.A[i], &arr.A[i-1]);
      return i;
    }
  }
  return -1;
}

void Swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void Get(array arr, int i)
{
  if (i >= 0 && i < arr.length)
    printf("The element at index %d is %d.\n",i, arr.A[i]);
  else
    printf("Invalid index.\n");
}

void Set(array *arr, int i, int x)
{
  if(i >= 0 && i <= arr->length)
    arr->A[i] = x;
  else
    printf("Invalid index.\n");
}

void Max(array arr)
{
  int large = arr.A[0], i;
  for(i=1; i<arr.length; i++)
  {
    if (arr.A[i] > large)
      large = arr.A[i];
  }
  printf("Largest element is: %d.\n", large);
}

void Min(array arr)
{
  int small = arr.A[0], i;
  for(i=1; i<arr.length; i++)
  {
    if (arr.A[i] < small)
      small = arr.A[i];
  }
  printf("Smallest element is: %d.\n", small);
}

void Sum(array arr)
{
  int sum = 0, i;
  for(i=0; i< arr.length; i++)
    sum = sum + arr.A[i];
  printf("Sum is: %d.\n", sum);
}

void Reverse(array *arr)
{
  int i, t;
  for(i=0; i<arr->length/2; i++)
  {
    t = arr->A[i];
    arr->A[i] = arr->A[arr->length-i-1];
    arr->A[arr->length-i-1] = t;
  }
}

void LeftShift(array *arr, int x)
{
  int ctr = 0, t, i;
  while(ctr < x)
  {
    t = arr->A[0];
    for(i=1; i<arr->length; i++)
      arr->A[i-1] = arr->A[i];
    arr->A[arr->length-1] = t;
    ctr++;
  }
}

void RightShift(array *arr, int x)
{
  int ctr = 0, i, t;
  while(ctr < x)
  {
    t = arr->A[arr->length-1];
    for(i=arr->length-1; i>0; i--)
      arr->A[i] = arr->A[i-1];
    arr->A[0] = t;
    ctr++;
  }
}
