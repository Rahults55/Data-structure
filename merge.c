//2 way merging
#include<stdio.h>
void main()
{
void reader(int[],int);
void display(int[],int);
void merge(int[],int[],int[],int,int);
int s1[50],s2[50],s3[100],n,m;
printf("enter the number of elements in first array[1-50]:");
scanf("%d",&n);
printf("Enter elements in first array");
reader(s1,n);
printf("Enter the number of elements in second array");
scanf("%d",&m);
printf("Enter elements in second array");
reader(s2,m);
merge(s1,s2,s3,n,m);
printf("The merged array is :\n");
display(s3,(m+n));
printf("\n");
}
//function for readind an array
       void reader(int s[],int n)
       {
         int i;
         printf("In non decreasing order:\n");
         for(i=0;i<n;i++)
         scanf("%d",&s[i]);
         return;
       }
//function for displaying an array
       void display(int s[],int n)
       {
       int i;
       for(i=0;i<n;i++)
       printf("%d\n",s[i]);
       return;
       }
      void merge(int s1[],int s2[],int s3[],int n,int m)
      {
      int i=0,j=0,k=0;
      //compare copy element
while(i<n && j<m)
{
if(s1[i]<s2[j])
{
s3[k]=s1[i];
i=i+1;
k=k+1;
}
else{
s3[k]=s2[j];
j=j+1;
k=k+1;
}
}
//copying reminding elements from s1
while(i<n)
{
s3[k]=s1[i];
k=k+1;
i=i+1;
}
//copying remaining elements from s2
while(j<m)
{
s3[k]=s2[j];
k=k+1;
j=j+1;
}
}


       
            


