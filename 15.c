#include<conio.h>
#include<stdio.h>
void main()
{
char string='P';
int p[3]={1,2,3};
float arrival[3]={0.0,0.4,1.0};
float burst[3]={8.0,4.0,1.0};
float turnaround[3],mtime[3],bstc[3];
float t=0.0,min;
int i,j,ind,inde;
float average = 0.0;
printf("Process\t\tArival Time\t\tBurst Time\n");
for(i=0;i<3;i++)
{
printf("%c%d\t\t%f\t\t%f\n",string,p[i],arrival[i],burst[i]);
}
printf("\n\nProcess\t\tTurn Around Time First Come First Service\n");
for(i=0;i<3;i++)
{
t=t+burst[i];
turnaround[i]=t-arrival[i];
printf("%c%d\t\t%f\n",string,p[i],turnaround[i]);
}
for(i=0;i<3;i++)
{
average=turnaround[i]+average;
}
printf("Average turnaround time in First Come First Service algorithm is: %f\n\n",(average/3));
t=0.0;
for(i=0;i<3;i++)
{
mtime[i]=arrival[i];
}
for(i=0;i<3;i++)
{
bstc[i]=burst[i];
}
printf("Process\t\tTurn Around Time Shortest Job First\n");
for(i=0;i<3;i++)
{
min=mtime[0];
for(j=0;j<3;j++)
{
if(min>mtime[j])
{
min=mtime[j];
ind=j;
}
}
min=burst[0];
for(j=0;j<ind;j++)
{
if(min>bstc[j])
{
min=bstc[j];
inde=j;
}
}
t=t+burst[inde];
turnaround[i]=t-arrival[i];
mtime[ind]=1000.0;
bstc[inde]=1000.0;
printf("%c%d\t\t%f\n",string,p[i],turnaround[i]);
}
average = 0.0;
for(i=0;i<3;i++)
{
average=turnaround[i]+average;
}
printf("Average turnaround time in Shortest Job First algorithm is: %f\n\n",(average/3));
t=0.0;
for(i=0;i<3;i++)
{
mtime[i]=arrival[i]+(1-arrival[i]);
}
for(i=0;i<3;i++)
{
bstc[i]=burst[i];
}
printf("Process\t\tTurn Around Time Shortest Job First\n");
for(i=0;i<3;i++)
{
min=mtime[0];
for(j=0;j<3;j++)
{
if(min>mtime[j])
{
min=mtime[j];
ind=j;
}
}
min=burst[0];
for(j=0;j<ind;j++)
{
if(min>bstc[j])
{
min=bstc[j];
inde=j;
}
}
t=t+burst[inde];
turnaround[i]=t-arrival[i];
mtime[ind]=1000.0;
bstc[inde]=1000.0;
printf("%c%d\t\t%f\n",string,p[i],turnaround[i]);
}
average = 0.0;
for(i=0;i<3;i++)
{
average=turnaround[i]+average;
}
printf("Average turnaround time in Shortest Job First algorithm, If cpu is idle for 1 unit : %f\n\n",(average/3));
getch();
}
