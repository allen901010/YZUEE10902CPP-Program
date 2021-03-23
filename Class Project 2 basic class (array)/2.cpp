/*
 name:李岱倫
 student ID:1090604
 date:3/8
 */

#include<iostream>
#include<cstdlib>
using namespace std;

class MyArray
{
public:
    int a[100];
    int count;
    
    void set_values(int b[],int num)
    {
        for(int i=0;i<num;i++)
        {
            a[i]=b[i];
        }
        count=num;
    }
    
    void printAll()
    {
        cout<<"陣列：";
        for(int i=0;i<count;i++)
        {
            cout<<a[i]<<",";
        }
        cout<<endl<<"共"<<count<<"個數值"<<endl;
    }
    
    void delete_array(int index)
    {
        for(int i=index-1;i<=100;i++)
        {
            if(a[i]==0)
                break;
            a[i]=a[i+1];
        }
        count=count-1;
    }
    
    void intsert_array(int index,int value)
    {
        for(int i=count+1;i>=index-1;i--)
        {
            a[i]=a[i-1];
        }
        a[index-1]=value;
        count=count+1;
    }
};

int main()
{
    int b[6]={3,12,18,17,20,100};
    int num=6;
    int index,value;
    
    MyArray a;
    a.set_values(b,num);
    a.printAll();
    cout<<"enter the index number to delete:";
    cin>>index;
    a.delete_array(index);
    a.printAll();
    cout<<"number of value:";
    cin>>value;
    a.intsert_array(index, value);
    a.printAll();
    
    system("pause");
}
