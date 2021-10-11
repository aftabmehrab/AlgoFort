
#include<iostream>

using namespace std;

int main()
{
    int n,num;
    cout<<"Enter the number whose hailstone sequence is to be printed : ";
    cin>>n;
    num=n;
    cout<<endl<<"The hailstone sequence of "<<n<<" : "<<n<<" ";
    if(n==1)
        cout<<n<<endl;
    else
    while(num!=1)
        {
            if(num%2==0)
            {
                num=num/2;
                cout<<num<<" ";
            }
            else
            {
                num=num*3+1;
                cout<<num<<" ";
            }
        }

        return 0;
}


