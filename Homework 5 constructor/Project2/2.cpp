/*
 name:李岱倫
 student ID:1090604
 date:3/30
 */
#include<iostream>
#include<cstdlib>
using namespace std;

class MyArray
{
private:
    int data[1000]={0};
    int count;
public:
    //MyArray(int a[],int size);
    MyArray();
    void setvalues(int a[],int size);
    void print();
    bool compare(MyArray &a1);
    void sort_big_to_small();
};

/*MyArray::MyArray(int a[],int size)
{
    setvalues(a,size);
}*/
MyArray::MyArray()
{
    data[1000]={0};
    count=0;
}
void MyArray::setvalues(int a[],int size)
{
    for(int i=count,j=0;i<=count+size-1;i++,j++)
    {
        data[i]=a[j];
    }
    count+=size;

}
void MyArray::print()
{
    for(int i=0;i<count;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
bool MyArray::compare(MyArray &a1)
{
    int i=0;
    while(a1.data[i]!=0)
    {
        if(data[i]!=a1.data[i])
            return false;
        i++;
    }
    return true;
}
void MyArray::sort_big_to_small()
{
    int x,y[1000]={0},z=0;
    for(x=0;x<=1000;x++)
    {
        //cout<<data[x]<<endl;
        if(data[x]==0)
        {
            break;
        }
    }
    //cout<<x<<endl;
    for(int i=1000;i>=0;i--)
    {
        for(int j=0;j<x;j++)
        {
            if(data[j]==i)
            {
                y[z]=data[j];
                z++;
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        data[i]=y[i];
    }
}

int main()
{
    int a[3]={1,22,33},b[4]={4,5,6,7};
    MyArray ar1,ar2,ar3;
    ar1.setvalues(a,3);
    ar1.print();
    ar2.setvalues(a,3);
    ar2.print();
    ar3.setvalues(a,3);
    ar3.print();
    ar3.setvalues(b,4);
    ar3.print();

    cout<<"ar1.compare(ar2)->";
    if(ar1.compare(ar2)==true)
        cout<<"true"<<endl;
    if(ar1.compare(ar2)==false)
        cout<<"false"<<endl;
    cout<<"ar2.compare(ar3)->";
    if(ar2.compare(ar3)==true)
        cout<<"true"<<endl;
    if(ar2.compare(ar3)==false)
        cout<<"false"<<endl;

    ar3.sort_big_to_small();
    ar3.print();

    system("pause");
}
