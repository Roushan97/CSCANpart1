#include<stdio.h>
#include<stdlib.h>

int main()
{
      int queue1[6760], queue2[6760],queue3[6760];
      int limit, disk_head, count = 0, j, seek_time =4999 , range, diff;
      int t1, t2 = 0, t3 = 4999;
      float avg_seek_time;
      printf("Maximum Range of Disk:\t");
      scanf("%d", &range);
      printf("Initial Head Request Position:\t");
      scanf("%d", &disk_head);
      printf(" Enter Queue Request Size:\t");
      scanf("%d", &limit);
      printf("Enter Disk Queue Element Positions:\n");
