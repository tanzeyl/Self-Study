#include <stdio.h>

int findLRU(int [], int);

int main()
{
  int n, fs, flag1, flag2, counter=0, faults=0, pos;
  char temp;
  printf("Enter the number of pages.\n");
  scanf("%d",&n);
  char ref[n];
  printf("Enter the frame size.\n");
  scanf("%d",&fs);
  char frames[fs];
  int time[fs];
  printf("Enter the reference string.\n");
  scanf("%s",ref);
  for (int i=0; i<fs; i++) frames[i] = -1;
  for (int i=0; i<n; i++)
  {
    temp = ref[i];
    flag1 = flag2 = 0;
    for (int j=0; j<fs; j++)
    { if (frames[j] == temp) { counter++; time[j] = counter; flag1 = flag2 = 1; break; } }
    if (flag1 == 0)
    {
      for (int j=0; j<fs; j++)
      { if (frames[j] == -1) { counter++; faults++; frames[j] = temp; time[j] = counter; flag2 = 1; break; } }
    }
    if (flag2 == 0)
    {
      pos = findLRU(time, fs);
      counter++;
      faults++;
      frames[pos] = ref[i];
      time[pos] = counter;
    }
    printf("The frame is as follows:\n");
    for (int j=0; j<fs; j++) printf("%c ",frames[j]);
    printf("\n");
  }
}

int findLRU(int time[], int fs)
{
  int min = time[0], i, pos = 0;
  for (i=1; i<fs; i++)
  { if (time[i] < min) { min = time[i]; pos = i; } }
  return pos;
}
//701324023101771
