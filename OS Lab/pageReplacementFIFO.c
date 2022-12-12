#include <stdio.h>

int search(char [], char, int);

int main()
{
  int n, fs, faults = 0, hits = 0, current = 0;
  char temp;
  printf("Enter the size of the reference string.\n");
  scanf("%d",&n);
  printf("Enter the frame size.\n");
  scanf("%d",&fs);
  char frames[fs];
  for (int i=0; i<fs; i++) { frames[i] = 'x'; }
  char ref[n];
  printf("Enter the reference string.\n");
  scanf("%s",ref);
  for (int i=0; i<n; i++)
  {
    temp = ref[i];
    if (!search(frames, temp, fs))
    { frames[current] = temp; faults++; current = (current+1)%fs; }
    else hits++;
    for (int i=0; i<fs; i++) printf("%c ",frames[i]);
    printf("\n");
  }
  printf("Number of page faults:%d.\nNumber of hits: %d.\n",faults,hits);
}

int search(char frames[], char t, int fs)
{
  for (int i=0; i<fs; i++)
  { if (frames[i] == t) return 1; }
  return 0;
}
//701203042303120
