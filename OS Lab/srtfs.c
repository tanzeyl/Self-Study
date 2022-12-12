#include <stdio.h>
#include <limits.h>

typedef struct process
{
  int at, bt, wt, tat, remT, resT, ct, flag;
} process;

int getReadyProcesses(process [], int [], int, int);

int main()
{
  int n, total = INT_MAX, readyPrs, small, current, q, min, tat=0, twt=0, flag = 1,k;
  printf("Enter the number of processes.\n");
  scanf("%d",&n);
  process prs[n];
  printf("Enter the burst time and arrival time for each process.\n");
  for (int i=0; i<n; i++)
  {
    scanf("%d%d",&prs[i].bt,&prs[i].at);
    if (prs[i].at < total) total = prs[i].at;
    prs[i].flag = 1;
    prs[i].remT = prs[i].bt;
    prs[i].resT = -1;
  }
  printf("Enter the time quanta allocated.\n");
  scanf("%d",&q);
  while (flag)
  {
    small = INT_MAX;
    int ready[n];
    for (int i=0; i<n; i++) { ready[i] = -1; }
    readyPrs = getReadyProcesses(prs, ready, n, total);
    for (int i=0; i<readyPrs; i++)
    { if (prs[ready[i]].remT < small) { small = prs[ready[i]].remT; current = ready[i]; } }
    if (prs[current].remT != 0)
    {
      min = (prs[current].remT < q) ? prs[current].remT : q;
      prs[current].remT -= min;
      total += min-q;
    }
    if (prs[current].remT == 0) { prs[current].ct = total+q; prs[current].flag = 0; }
    if (prs[current].resT == -1) prs[current].resT = total - prs[current].at;
    total += q;
    for (k=0; k<n; k++)
    { if (prs[k].remT != 0) break; }
    if (k == n) flag = 0;
  }
  for (int i=0; i<n; i++) { prs[i].tat = prs[i].ct - prs[i].at; }
  for (int i=0; i<n; i++) { prs[i].wt = prs[i].tat - prs[i].bt; }
  printf("\nArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurn Around Time\tResponse Time\n");
  for (int i=0; i<n; i++)
  { printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n",prs[i].at,prs[i].bt,prs[i].ct,prs[i].wt,prs[i].tat,prs[i].resT); }
  for (int i=0; i<n; i++) tat += prs[i].tat;
  for (int i=0; i<n; i++) twt += prs[i].wt;
  printf("Average waiting time: %f.\n",twt/(n*1.0));
  printf("Average turn around time: %f.\n",tat/(n*1.0));
}

int getReadyProcesses(process prs[], int ready[], int n, int total)
{
  int j=0, count=0;
  for (int i=0; i<n; i++)
  { if (prs[i].at <= total && prs[i].remT > 0) { ready[j++] = i; count++; } }
  printf("Current ready processes:\n");
  for (int i=0; i<count; i++) printf("%d ",ready[i]);
  printf("\n");
  return count;
}
