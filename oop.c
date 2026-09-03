#include<stdio.h>
int main ()
{
	
	int p1[10][3],p2[10][3],sum[20][3];
	int n1,n2,i,j,k=0;
	printf("enter number of term in polynomials 1");
	scanf("%d",&n1);
	printf("enter coefficient xpower or ypower\n");
	for(i=0;i<n1;i++)
	   scanf("%d%d%d",&p1[i][0],&p1[i][1],&p1[i][2]);

	printf("enter the term in polynomials 2:");
     	scanf("%d",&n2);
	printf("enter coefficient xpower or ypower\n");
	for(i=0;i<n2;i++)
	   scanf("%d%d%d",&p2[i][0],&p2[i][1],&p2[i][2]);
	for(i=0;i<n1;i++)
  {
	for(j=0;j<n1;j++)
    {
	    
		if (p1[i][1]==p2[j][1]&&
		  p1[i][2]==p2[j][2]);
	  	{
		
			sum[k][0]=p1[i][0]+p2[j][0];
			sum[k][1]=p1[i][1];
			sum[k][2]=p1[i][2];
			k++;
    	}
	} 
  }
	printf("\nResult polynomial:\n");
	for(i=0;i<k;i++)
	printf("%dx^%dy^%d"
    ,sum[i][0],sum[i][1],sum[i][2]);
	
	
}


77