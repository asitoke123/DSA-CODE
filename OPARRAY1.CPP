#include<iostream.h>
#include<conio.h>
#include<process.h>

void main()
{
 int A[10][10],B[10][10],C[10][10];
 int i,j,m,n,p,q;
 clrscr();
 cout<<"\n enter size of A \n";
 cin>>m>>n;
 cout<<"\n enter size of B \n";
 cin>>p>>q;
 if(m!=p || n!=q)
 {
  cout<<"\n matrix addition is not possible \n";
  exit(0);
 }
 cout<<"\n enter matrix A values \n";
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
    cin>>A[m][n];
    cout<<"\n enter matrix B values \n";
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    cin>>B[p][q];
//for addition
 for (i=0;i<m;i++)
 for(j=0;j<n;j++)
 C[i][j]=A[i][j] + B[i][j];

 cout<<"\n after addition output: \n";
 for (i=0;i<m;i++)
 for(j=0;j<n;j++)
 cout<<C[i][j];

 getch();
}



