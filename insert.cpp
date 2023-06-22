#include<iostream>
#define size 5
using namespace std;
class insert{
    int i,k,item,a[size],n;
    public:
    void getdata()
    {
        cout<<"Enter the size of the array"<<endl;
        siz:
        cin>>n;
        if(n<=size)
        {
            cout<<"Enter the elements"<<endl;
            for(i=0;i<n;i++)
            cin>>a[i];
            cout<<"Enter the position to insert new element"<<endl;
            pos:
            cin>>k;
            if(k>n){
            cout<<"Position not within the limit!\nEnter in range[0-"<<n<<"]"<<endl;
            goto pos;
            }
            else{
            cout<<"Enter the item to be inserted into position"<<"["<<k<<"]"<<endl;
            cin>>item;
            }
        }
        else{
        cout<<"Size not within the limit!\nEnter in range[0-5]"<<endl;
        goto siz;
        }

    }
    int process()
    {int c;
        if(n<size)
        {
           for(i=n-1;i>=k;i--)
           {
            a[i+1]=a[i];
           }
           a[k]=item;
           n++;
        }
       
        else
        return 1;
      
    }
    void showdata(int check)
    {
    {
        if(check==1)
        {
            cout<<"Array is full!"<<endl<<"Insertion is not possible.......";
            exit(0);
        }
        else{
        cout<<"The new array is:"<<endl;
        for(i=0;i<n;i++)
        cout<<a[i] ; 
         }
    }
    }
};
int main()
{int check;
    insert i;
    i.getdata();
   check=i.process();
    i.showdata(check);
}