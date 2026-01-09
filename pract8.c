#include<stdio.h>
void main()
{
	int a,b,n,ne=1,i,j,min,cost[10]         [10],mincost=0;
	printf("\n Enter The no of Vertices=");
	scanf("%d",&n);
	printf("\n Enter The adj Matrix\n");

	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=n;j++)
	  {
	    scanf("%d",&cost[i][j]);
	    if(cost[i][j]==0)
	    {
	      cost[i][j]=999;
	    }
	  }
	}

	while(ne<n)
	{
	   min=999;
	   for(i=1;i<=n;i++)
	   {
	     for(j=1;j<=n;j++)
	     {

	       
		 if(cost[i][j]<min)
		 {
		  min=cost[i][j];
		  a=i;
		  b=j;
		 }
	       
	     }
	   }


	     printf("edge(%d,%d)=%d\n",a,b,min);
	     mincost=mincost+min;
	     
		cost[a][b]=cost[b][a]=999;
		ne++;

	     

	}
	printf("\nMinmum spanning Tree of wt=%d",mincost);
}

