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
    printf("Enter the operation you want to do.\n1. Display\n2.Append\n3.Insert\n4. Delete(from index)\n5. Search\n");
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
