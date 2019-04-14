#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class book
{   
  public :
    string nam;
    int prc,pgs;
    void input()
    {
    	cout<<"\n\n\nEnter Name of the book : ";
		cin>>nam;
		cout<<"Enter the price : ";
		cin>>prc;
		cout<<"Enter the No. Of pages : ";
		cin>>pgs;
	}
	void output()
	{int tax;
	        cout<<"\n\n\nThe Details of the book are :";
			cout<<"\n\nName :"<<nam<<"\tPages :"<<pgs<<"\tPrice Of Book:"<<prc;
			tax=(0.1*prc)+prc;
			cout<<"\n\nThe Total Price with Delivery Charge is :"<<tax;
	}
}*b1;

int main()
{
	b1=new book;
	b1->input();
	b1->output();
}
