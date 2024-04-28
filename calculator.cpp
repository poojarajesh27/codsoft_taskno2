#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
template<class t>
void calculator(t a,t b)
{
    int choice;
    cout<<"enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"addition : "<<a+b<<endl;
            break;
        case 2:
            cout<<"subtraction : "<<a-b<<endl;
            break;
        case 3:
            cout<<"multiplication : "<<a*b<<endl;
            break;
        case 4:
            try
            {
                if(b==0)
                {
                    throw 4;
                }
                else
                {
                    cout<<"division : "<<a/b<<endl;
                }
            }
            catch(int x)
            {
                cout<<"exception found out!!\n";
            }
            break;
        default:
           cout<<"invalid input!!";
           break;

    }
}
int main()
{
    int choose,continue1;
    do
    {
    cout<<"enter your wish : ";
    cin>>choose;
    switch(choose)
    {
        case 1:
            int r,s;
            cout<<"enter two integer values : ";
            cin>>r>>s;
            calculator(r,s);
            break;
        case 2:
             float e,f;
             cout<<"enter two float values : ";
             cin>>e>>f;
             calculator(e,f);
             break;
        case 3:
            double m,n;
            cout<<"enter two double values : ";
            cin>>m>>n;
            calculator(m,n);
            break;
        default:
            cout<<"invalid input!!\n";
            break;
    }
    cout<<"do you want to continue?? if yes press 1";
    cin>>continue1;
    }while(continue1==1);
    return 0;
}