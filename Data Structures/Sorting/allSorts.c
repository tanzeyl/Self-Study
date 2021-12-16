#include <stdio.h>

void bubbleSort(int [], int);
void selectionSort(int [], int);
void insertionSort(int [], int);
void quickSort(int [], int, int);
void mergeSort(int [], int, int);
void merge(int a[], int, int, int);

int main()
{
    int i, a[] = {2, 4, 3, 324, 565, 123, 76853};
    mergeSort(a, 0, 6);
    for(i=0; i<7; i++)
    printf("%d ",a[i]);
}

void bubbleSort(int a[], int n)
{
    int i, j, t;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if (a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}

void selectionSort(int a[], int n)
{
    int i, j, t, min;
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
        {
            t = a[min];
            a[min] = a[i];
            a[i] = t;
        }
    }
}

void insertionSort(int a[], int n)
{
    int i, j, t;
    for(i=1; i<n; i++)
    {
        t = a[i];
        j = i-1;
        while (j>=0 && t<a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
}

void quickSort(int a[], int lb, int ub)
{
    int i = lb, j = ub, t, key = a[lb];
    if (lb>=ub) return;
    while(i<j)
    {
        while(key>=a[i] && i<j) i++;
        while(key<a[j]) j--;
        if (i<j)
        {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
    }
    a[lb] = a[j];
    a[j] = key;
    quickSort(a, lb, j-1);
    quickSort(a, j+1, ub);
}

void mergeSort(int a[], int lb, int ub)
{
    int mid;
    if (lb>=ub) return;
    mid = (lb+ub)/2;
    mergeSort(a, lb, mid);
    mergeSort(a, mid+1, ub);
    merge(a, lb, mid, ub);
}

void merge(int a[], int lb, int mid, int ub)
{
    int i = lb, j = mid+1, k = lb, b[k+1];
    while(i<=mid && j<=ub)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    if (i>mid)
        while (j<=ub) b[k++] = a[j++];
    else
        while (i<=mid) b[k++] = a[i++];
    for (k=lb; k<=ub; k++) a[k] = b[k];
}
