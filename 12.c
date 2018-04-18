#include<conio.h>
#include<stdio.h>

void main()
{
int i,j,pagenum,pages[50],frame[10],framenum,k,available,PFault=0;
printf("\nEnter the number of Pages: ");
scanf("%d",&pagenum);
for(i=1;i<=pagenum;i++)
{
printf("\nEnter the page number %d: ",i);
scanf("%d",&pages[i]);
}
printf("\nEnter the number of frames: ");
scanf("%d",&framenum);
for(i=0;i<framenum;i++)
{
frame[i]=-1;
}
j=0;
printf("\n\nPage to  be Processed    Situation inside frame(-1 indicates no page is present)");
printf("\n");
for(i=1;i<=pagenum;i++)
{
printf("\n  \t%d   \t\t\t",pages[i]);
available=0;
	for(k=0;k<framenum;k++)
		if(frame[k]==pages[i])
		available=1;
	if(available==0)
	{
	frame[j]=pages[i];
	j=(j+1)%framenum;
	PFault++;
	for(k=0;k<framenum;k++)
	   printf("%d\t",frame[k]);
	}
	printf("\n");
}
printf("\n Number of Page Faults: %d",PFault);
getch();
}


