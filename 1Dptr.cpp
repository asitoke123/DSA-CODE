#include<iostream>
using namespace std;


int main()
{
    int*ptr;//integer pointer declaration
    int marks[10];//marks array declaration
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<1;i++)
    {
        cin>>marks[i];
    }

    ptr=marks;//both marks and ptr pointing to the same element....
    cout<<"the value of *ptr is:"<<*ptr<<std::endl;
    cout<<"the value of *marks is:"<<*marks<<std::endl;


    return 0;
}