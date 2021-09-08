#include<iostream>
using namespace std;

struct book
{
    int book_no;
    string name;
    int book_prize;
};


int main()
{

    struct book b[3];
    int i;

    //taking values from user
    for(i=0;i<3;i++)
    {
        cout<<"book"<<i+1<<endl;
        cout<<"enter book no"<<endl;
        cin>>b[i].book_no;
        cout<<"enter name "<<endl;
        cin>>b[i].name;
        cout<<"enter book prize "<<endl;
        cin>>b[i].book_prize;
    }

    //printing values
    for(i=0;i<3;i++)
    {
        cout<<"book"<<i+1<<endl;
        cout<<"Book no:"<<b[i].book_no<<endl;
        cout<<"Name:"<<b[i].name<<endl;
        cout<<"Book prize:"<<b[i].book_prize<<endl;
    }

    return 0;
}

