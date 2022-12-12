#include <stdio.h>

typedef struct process
{
  int at, bt, wt, tat;
} process;

void sort(process [], int);

int main()
{
  int n, total, tat = 0, twt = 0;
  printf("Enter the number of processes.\n");
  scanf("%d",&n);
  process processes[n];
  printf("Enter the burst time and arrival time of all the processes.\n");
  for (int i=0; i<n; i++)
  { scanf("%d%d",&processes[i].bt,&processes[i].at); }
  sort(processes, n);
  processes[0].wt = 0;
  total = processes[0].bt + processes[0].at;
  processes[0].tat = total - processes[0].at;
  for (int i=1; i<n; i++)
  {
    if (processes[i].at >= total) { processes[i].wt = 0; total += processes[i].at; }
    else { processes[i].wt = total - processes[i].at; total += processes[i].bt; }
  }
  for (int i=0; i<n; i++) { processes[i].tat = processes[i].bt + processes[i].wt; }
  for (int i=0; i<n; i++) { twt += processes[i].wt; tat += processes[i].tat; }
  printf("\nArrival Time\tBurst Time\tWaiting Time\tTurn Around Time\n");
  for (int i=0; i<n; i++) { printf("%d\t\t%d\t\t%d\t\t%d\n",processes[i].at,processes[i].bt,processes[i].wt,processes[i].tat); }
  printf("Average waiting time is: %0.2f.\n",twt/(n*1.0));
  printf("Average waiting time is: %0.2f.\n",tat/(n*1.0));
}

void sort(process pr[], int n)
{
  int at, bt, j, i;
  for (i=1; i<n; i++)
  {
    at = pr[i].at; bt = pr[i].bt; j = i-1;
    while (j>=0 && at<pr[j].at)
    {
      pr[j+1].at = pr[j].at;
      pr[j+1].bt = pr[j].bt;
      j--;
    }
    pr[j+1].at = at;
    pr[j+1].bt = bt;
  }
}
