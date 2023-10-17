#include<iostream>
using namespace std;
int main()
{
    cout<<"***********WELCOME TO ATM*************";
    int depo_money,money,wd_money,total;
    string name;
    string act_num;
    int choice=0;
    while(choice!=5)
    {
        cout<<"\n*****1.SHOW DATA****"<<endl;
        cout<<"\n*****2.DEPOSIT MONEY****"<<endl;
        cout<<"\n*****3.SHOW TOTAL BALANCE****"<<endl;
        cout<<"\n*****4.WITHDRAM MONEY****"<<endl;
        cout<<"\n*****5.CANCEL****"<<endl;
    
        cout<<"\n ENTER YOUR CHOICE:";
        cin>>choice;
        
        switch(choice)
        {
           case 1:
           cout<<"ENTER YOUR NAME: ";
           cin>>name;
           cout<<"ENTER YOUR ACCOUNT NUMBER: ";
           cin>>act_num;
           break;
            
           case 2:
           cout<<"TOTAL MONEY TO DEPOSITED:  ";
           cin>>depo_money;
           cout<<"\n   money deposited   ";
           break;
           
           case 3:
           cout<<"****TOTAL BALANCE***";
           cout<<"\nENTER YOUR PREVIOUS BALANCE ";
           cin>>money;
            total=money+depo_money;
           cout<<"\n   TOTAL BALANCE IS:   "<<total;
           break;
           case 4:
           cout<<"TOTAL MONEY TO WITHDRAW:";
           cin>>wd_money;
           cout<<"\n MONEY WITHDRAW";
           cout<<"total balance: "<<total-wd_money<<endl;
           
           break;
           
           default:
           cout<<"CANCEL";
           cout<<"\nTHANK YOU ^-^ ";
           cout<<"HAVE A NICE DAY!!!!"; 
           exit(0);
        }
    }
}
