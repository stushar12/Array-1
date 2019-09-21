#include<stdio.h>
int main()
{
  int arr[20],arr1[20],arr2[20];
  int k=0,m,c=0,j=0,i,n=0,d=0,temp1;
  printf("\n Enter the number of elements in the array ");
  scanf("%d",&m);
  printf("\n Enter the elements of array\n");
  for(i=0;i<m;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<m;i++)
  {
if(arr[i]==arr[i+1])
continue;
else
c++;
}
int mat[c][2],temp;
for(i=0;i<m;i=i+k)
{
  temp=arr[i];
  k=0;
  while(arr[i]==arr[j])
  {
     k++;
    j++;
    d++;
  }
  arr1[n]=temp;
  arr2[n]=d;
  n++;
  d=0;
}
for(i=0;i<c;i++)
{
  mat[i][0]=arr1[i];
  mat[i][1]=arr2[i];
}
for (i = 0; i < c; ++i)
    {
        for (j = i; j < c; ++j)
        {
            for (k = j + 1; k < c; ++k)
            {
      if(mat[i][1]<mat[k][1])
      {
        temp=mat[i][1];                   ////STORING  count of mumber
         temp1=mat[i][0];                ///storing the number
        mat[i][1]=mat[k][1];              ////STORING  count of mumber
           mat[i][0]=mat[k][0];           ///storing the number
        mat[k][1]=temp;
        mat[k][0]=temp1;
      }
    }
}

}
for(i=0;i<c;i++)
{
  for(j=0;j<1;j++)
  {
    for(k=0;k<mat[i][1];k++)
    {
      printf("%d,",mat[i][j]);
    }
  }
}
}
