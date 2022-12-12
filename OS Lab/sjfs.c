#include <stdio.h>
#include <limits.h>

typedef struct process
{
  int at, bt, wt, tat, flag;
} process;

int getReadyprocesses(process [], int [], int, int);

int main()
{
  int n, total, small = INT_MAX, readyPrs, current, tat=0, twt=0;
  printf("Enter the number of processes.\n");
  scanf("%d",&n);
  process prs[n];
  printf("Enter the burst time and arrival time for all the processes.\n");
  for (int i=0; i<n; i++)
  { scanf("%d%d",&prs[i].bt,&prs[i].at); if (prs[i].at < small) small = prs[i].at; prs[i].flag = 1; }
  total = small;
  for (int i=0; i<n; i++)
  {
    int ready[n];
    for (int i=0; i<n+1; i++) { ready[i] = -1; }
    readyPrs = getReadyprocesses(prs, ready, n, total);
    small = INT_MAX;
    for (int i=0; i<readyPrs; i++)
    { if (prs[ready[i]].bt < small) { small = prs[ready[i]].bt; current = ready[i]; } }
    prs[current].wt = total - prs[current].at;
    total += prs[current].bt;
    prs[current].flag = 0;
  }
  for (int i=0; i<n; i++) { prs[i].tat = prs[i].bt + prs[i].wt; }
  for (int i=0; i<n; i++) { tat += prs[i].tat; twt += prs[i].wt; }
  printf("\nArrival Time\tBurst Time\tWaiting Time\tTurn Around Time\n");
  for (int i=0; i<n; i++)
  { printf("%d\t\t%d\t\t%d\t\t%d\n",prs[i].at,prs[i].bt,prs[i].wt,prs[i].tat); }
  printf("Average waiting time: %f.\n",twt/(n*1.0));
  printf("Average turn around time: %f.\n",tat/(n*1.0));
}

int getReadyprocesses(process prs[], int ready[], int n, int total)
{
  int j=0, count = 0;
  for (int i=0; i<n; i++)
  { if (prs[i].at <= total && prs[i].flag == 1) { ready[j++] = i; count++; } }
  return count;
}
