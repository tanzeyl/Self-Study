#include <stdio.h>
#include <stdlib.h>

typedef struct Array
{
  int A[10], size, length;
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
void InsertSort(array *, int);
int isSorted(array);
void Rearrange(array *);
array * Merge(array *, array *);
array * Union(array *, array *);
array * Intersection(array *, array *);
array * Difference(array *, array *);

int main()
{
  int n, i, x, ch;
  array arr = {{2, 4, 6, 8, 10}, 10, 5};
  array arr2 = {{3, 4, 5, 7, 10}, 10, 5};
  array *arr3;

  while(1)
  {
    printf("Enter the operation you want to do.\n1. Display\n2.Append\n3.Insert\n4. Delete(from index)\n5. Search\n6. Get\n7. Set\n8. Max\n9. Min\n10. Sum\n11. Reverse\n");
    printf("12. Left Shift\n13. Right Shift\n14. Insert Sort\n15. Check Sorted\n16. Rearrange\n17. Merge\n18. Union\n19. Intersection\n20. Difference\n");
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
      case 14: printf("Enter the element you want to insert.\n");
               scanf("%d",&x);
               InsertSort(&arr, x);
               break;
      case 15: isSorted(arr); break;
      case 16: Rearrange(&arr); break;
      case 17: arr3 = Merge(&arr, &arr2);
               for(i=0; i<arr3->length; i++)
                printf("%d ", arr3->A[i]);
               break;
      case 18: arr3 = Union(&arr, &arr2);
               for(i=0; i<arr3->length; i++)
                printf("%d ", arr3->A[i]);
               break;
      case 19: arr3 = Intersection(&arr, &arr2);
               for(i=0; i<arr3->length; i++)
                printf("%d ", arr3->A[i]);
               break;
      case 20: arr3 = Difference(&arr, &arr2);
               for(i=0; i<arr3->length; i++)
                printf("%d ", arr3->A[i]);
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

void InsertSort(array *arr, int x)
{
  int i = arr->length-1;
  if (arr->length == arr->size)
  {
    printf("Not enough space.\n");
    return;
  }
  while(i >= 0 && arr->A[i] > x)
  {
    arr->A[i+1] = arr->A[i];
    i--;
  }
  arr->A[i+1] = x;
  arr->length++;
}

int isSorted(array arr)
{
  int i;
  for(i=0; i< arr.length-1; i++)
  {
    if (arr.A[i] > arr.A[i+1])
      return 0;
  }
  return 1;
}

void Rearrange(array *arr)
{
  int i = 0, j = arr->length-1;
  while(i<j)
  {
    while(arr->A[i] < 0) i++;
    while(arr->A[j] >= 0) j--;
    if (i < j)
      Swap(&arr->A[i], &arr->A[j]);
  }
}

array * Merge(array *arr1, array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  array *arr3 = (array *)malloc(sizeof(array));
  while(i < arr1->length && j < arr2->length)
  {
    if(arr1->A[i] < arr2->A[j])
      arr3->A[k++] = arr1->A[i++];
    else
      arr3->A[k++] = arr2->A[j++];
  }
  for(; i < arr1->length; i++)
    arr3->A[k++] = arr1->A[i];
  for(; j< arr2->length; j++)
    arr3->A[k++] = arr2->A[j];
  arr3->length = arr1->length + arr2->length;
  arr3->size = arr1->size + arr2->size;
  return arr3;
}

array * Union(array *arr1, array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  array *arr3 = (array *)malloc(sizeof(array));
  while(i < arr1->length && j < arr2->length)
  {
    if(arr1->A[i] < arr2->A[j])
      arr3->A[k++] = arr1->A[i++];
    else if (arr2->A[j] < arr1->A[i])
      arr3->A[k++] = arr2->A[j++];
    else
    {
      arr3->A[k++] = arr1->A[i++];
      j++;
    }
  }
  for(; i < arr1->length; i++)
    arr3->A[k++] = arr1->A[i];
  for(; j< arr2->length; j++)
    arr3->A[k++] = arr2->A[j];
  arr3->length = k;
  arr3->size = arr1->size + arr2->size;
  return arr3;
}

array * Intersection(array *arr1, array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  array *arr3 = (array *)malloc(sizeof(array));
  while(i < arr1->length && j < arr2->length)
  {
    if(arr1->A[i] < arr2->A[j])
      i++;
    else if (arr2->A[j] < arr1->A[i])
      j++;
    else
    {
      arr3->A[k++] = arr1->A[i++];
      j++;
    }
  }
  arr3->length = k;
  arr3->size = arr1->size + arr2->size;
  return arr3;
}

array * Difference(array *arr1, array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  array *arr3 = (array *)malloc(sizeof(array));
  while(i < arr1->length && j < arr2->length)
  {
    if(arr1->A[i] < arr2->A[j])
      arr3->A[k++] = arr1->A[i++];
    else if (arr2->A[j] < arr1->A[i])
      j++;
    else
    {
      i++;
      j++;
    }
  }
  for(; i < arr1->length; i++)
    arr3->A[k++] = arr1->A[i];
  arr3->length = k;
  arr3->size = arr1->size + arr2->size;
  return arr3;
}
