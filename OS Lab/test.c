#include <stdio.h>
#include <stdlib.h>

typedef struct process
{
    int burstTime, arrivalTime, waitingTime, turnAroundTime;
} process;

void sort(process [], int);

int main()
{
    int n, totalTime, twt = 0, tat = 0;
    printf("Enter the number of processes.\n");
    scanf("%d",&n);
    process processes[n];
    printf("Enter the burst time and arrival time of all the processes.\n");
    for (int i=0; i<n; i++)
    { scanf("%d%d",&processes[i].burstTime,&processes[i].arrivalTime); }
    sort(processes, n);
    processes[0].waitingTime = 0;
    totalTime = processes[0].arrivalTime + processes[0].burstTime;
    processes[0].turnAroundTime = totalTime - processes[0].arrivalTime;
    for (int i=1; i<n; i++)
    {
        if (processes[i].arrivalTime >= totalTime) { processes[i].waitingTime = 0; totalTime += processes[i].arrivalTime; }
        else { processes[i].waitingTime = totalTime - processes[i].arrivalTime; totalTime += processes[i].burstTime; }
    }
    for (int i=0; i<n; i++) processes[i].turnAroundTime = processes[i].burstTime + processes[i].waitingTime;
    for (int i=0; i<n; i++) { twt += processes[i].waitingTime; tat += processes[i].turnAroundTime; }
    printf("\nBurstTime\tArrival Time\tWaiting Time\tTurn Around Time\n");
    for (int i=0; i<n; i++)
    { printf("%d\t\t%d\t\t%d\t\t%d\n",processes[i].burstTime,processes[i].arrivalTime,processes[i].waitingTime,processes[i].turnAroundTime); }
    printf("Average waiting time: %0.2f.\n",twt/(n+0.0));
    printf("Average turn around time: %0.2f.\n",tat/(n+0.0));
}

void sort(process processes[], int n)
{
  int i, j, at, bt;
  for(i=1; i<n; i++)
  {
    at = processes[i].arrivalTime; bt = processes[i].burstTime; j = i-1;
    while(j >= 0 && at<processes[j].arrivalTime)
    {
      processes[j+1].arrivalTime = processes[j].arrivalTime;
      processes[j+1].burstTime = processes[j].burstTime;
      j--;
    }
    processes[j+1].arrivalTime = at;
    processes[j+1].burstTime = bt;
  }
}
