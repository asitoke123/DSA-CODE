#include<iostream>
using namespace std;

int main()
{
 int n=3;
 int arr[3][3][3];
 int i,j,k;

cout<<"enter the elements of 2*2array";
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   for(k=0;k<n;k++)

   cin>>arr[i][j][k];
   }
  }
 cout<<"elements in row major order"<<endl;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   for(k=0;k<n;k++){

   cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<arr[i][j][k]<<endl;
   }
 }
}

   cout<<" elements in column major order "<<endl;
 for(i=0;i<n;i++)
 {
  for(k=0;k<n;k++)
  {
   for(j=0;j<n;j++){

   cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<arr[i][j][k]<<endl;
   }
 }
}
return 0;
}


