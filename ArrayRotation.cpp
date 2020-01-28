//ArrayRotation

#include<iostream>
#include<math.h>

using namespace std;

void rotate(int a[],int k,int j)
{
   int z=0;
   while(z<=k)
   {
      int b = a[0];
      for (int i=0;i<j;i++)
      {
         a[i]=a[i+1];
      }
      a[j-1]=b;
      z++;
   }
}

int main ()
{
   int c[100],i,j,k;
   cout<<"Enter the number of elements for an array \n";
   cin>>j;
   cout<<"Enter  elements for an array \n";
   for (i=0;i<j;i++)
   {
      cin>>c[i];
   }
   cout<<"The array is \n";
   for (i=0;i<j;i++)
   {
      cout<<c[i];
   }
   cout<<"Enter the space for rotation \n";
   cin>>k;
   rotate(c,k,j);
   cout<<"The rotated array is \n";
   for (i=0;i<j;i++)
   {
      cout<<c[i];
   }
}
