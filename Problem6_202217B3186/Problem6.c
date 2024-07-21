#include <stdio.h>

int main() {
    int n, i;
    int burst_time[10], arrival_time[10], waiting_time[10], turnaround_time[10];
    float avg_waiting_time, avg_turnaround_time;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &burst_time[i]);
    }

    printf("Enter the arrival times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arrival_time[i]);
    }

    waiting_time[0] = 0;
    for (i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i-1] + burst_time[i-1];
    }

    for (i = 0; i < n; i++) {
        turnaround_time[i] = waiting_time[i] + burst_time[i];
    }

    avg_waiting_time = 0;
    avg_turnaround_time = 0;
    for (i = 0; i < n; i++) {
        avg_waiting_time += waiting_time[i];
        avg_turnaround_time += turnaround_time[i];
    }
    avg_waiting_time /= n;
    avg_turnaround_time /= n;

    printf("\n\tProcess\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("\tP%d\t%d\t\t%d\n", i, waiting_time[i], turnaround_time[i]);
    }
    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}
