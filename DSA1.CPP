#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char *sub[7]={"data communication","discrete structure","data structure and algo","cloud computing","php","unix","java"};
 cout<<"enter the subjects of your current semester"<<endl;
 for(int i=0;i<7;i++)
 {
   cout<<i+1<<"."<<sub[i]<<endl;
 }
     cout<<"the subjects are:"<<endl;
 for(i=0;i<7;i++)
 {

   cout<<i+1<<"."<<sub[i]<<endl;
 }

 getch();
}