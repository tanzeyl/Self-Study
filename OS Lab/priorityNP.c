#include <stdio.h>
#include <limits.h>

typedef struct process
{
  int at, bt, pr, wt, tat, flag;
} process;

int getReadyProcesses(process [], int [], int, int);

int main()
{
  int n, total=INT_MAX, small, tempAt, current, readyPrs, tat=0, twt=0;
  printf("Enter the number of processes.\n");
  scanf("%d",&n);
  process prs[n];
  printf("Enter the priority, arrival time and burst time of each process.\n");
  for (int i=0; i<n; i++)
  { scanf("%d%d%d",&prs[i].pr,&prs[i].at,&prs[i].bt); if (prs[i].at < total) total = prs[i].at; prs[i].flag = 1; }
  for (int i=0; i<n; i++)
  {
    small = INT_MAX;
    int ready[n];
    for (int j=0; j<n; j++) { ready[j] = -1; }
    readyPrs = getReadyProcesses(prs, ready, n, total);
    for (int j=0; j<readyPrs; j++)
    { if (prs[ready[j]].pr < small) { small = prs[ready[j]].pr; current = ready[j]; } }
    printf("%d\n",current);
    prs[current].wt = total - prs[current].at;
    total += prs[current].bt;
    prs[current].flag = 0;
  }
  for (int i=0; i<n; i++) { prs[i].tat = prs[i].bt + prs[i].wt; }
  for (int i=0; i<n; i++) { tat += prs[i].tat; twt += prs[i].wt; }
  printf("\nPriority\tArrival Time\tBurst Time\tWaiting Time\tTurn Around Time\n");
  for (int i=0; i<n; i++)
  { printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",prs[i].pr,prs[i].at,prs[i].bt,prs[i].wt,prs[i].tat); }
  printf("Average waiting time: %f.\n",twt/(n*1.0));
  printf("Average turn around time: %f.\n",tat/(n*1.0));
}

int getReadyProcesses(process prs[], int ready[], int n, int total)
{
  int j=0, count=0;
  for (int i=0; i<n; i++)
  { if (prs[i].at <= total && prs[i].flag == 1) { ready[j++] = i; count++; } }
  return count;
}
