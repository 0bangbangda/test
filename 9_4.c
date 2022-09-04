#include<stdio.h>
#include<stdlib.h>
#define COL 10
#define ROW 10
int main(void){
  int arr[ROW][COL]={0};
  int i=0;
  int j=0;
  /*chushihua*/
  for(i=0;i<ROW;i++)
    {
      for(j=0;j<COL;j++)
	{
	  if(j==0)
	    {
	      arr[i][j]=1;
	    }
	  if(i==j)
	    {
	      arr[i][j]=1;
	    }
        }
    }
  /* fuzhi*/
  for(i=0;i<ROW;i++)
    {
      for(j=0;j<=i;j++)
	{
	  if(i>=2&&j>=1)
	    {
	      arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
	    }
	}
    }
  /*print*/
  for(i=0;i<ROW;i++)
    {
      for(j=0;j<=i;j++)
	{
	  printf("%-3d ",arr[i][j]);
	}
      printf("\n");
    }
  return EXIT_SUCCESS;
}
