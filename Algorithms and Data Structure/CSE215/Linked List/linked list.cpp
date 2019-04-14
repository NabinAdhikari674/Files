#include<iostream>
#include<conio.h>
using namespace std;
struct node{
     int data;
     node  *next; }*q, *temp, *start=NULL;


 void create_beg(){
    temp = new node;
    temp -> next = NULL;
    cout << "\nEnter data\n " ;
    cin >> temp -> data ;
    if(start == NULL)
    {start = temp;}
           else
           {    
                temp->next=start;
                start=temp;
                }
 }
 void create_end(){
    temp = new node;
    temp -> next = NULL;
    cout << "\nEnter data\n " ;
    cin >> temp -> data ;
    if(start == NULL)
    {start = temp;}
           else
           {    q= start;
                while(q->next != NULL)
                {  q = q->next;
                }
                q->next = temp;
                } }
                
 void create_loc_after(){
      int loc,n=1;
    temp = new node;
    temp -> next = NULL;
    cout << "\nEnter data\n " ;
    cin >> temp -> data ;
    cout << "\nEnter LOC\n " ;
    cin >> loc ;
    if(start == NULL)
    {start = temp;}
           else
           {    q= start;
                while(loc!= n)
                {  q = q->next;
                n++;
                }
                temp->next=q->next;
                q->next = temp;
                
                } }
 void create_loc_before(){
      int loc,n=1;
      node *prev;
    temp = new node;
    temp -> next = NULL;
    cout << "\nEnter data\n " ;
    cin >> temp -> data ;
    cout << "\nEnter LOC\n " ;
    cin >> loc ;
    if(start == NULL)
    {start = temp;}
           else
           {    q= start;
                while(loc-1!= n)
                {  q = q->next;
                n++;
                //prev=q;
                }
                //temp->next=q;
                //prev->next= temp;
                temp->next=q->next;
                q->next = temp;
                } 
                }
 void display()
 {
       q=start;
       while(q!=NULL)
       {
                   cout<<q->data<<endl;
                   q = q->next;
       }
 }
 
 main()
 {
       create_beg();
       create_beg();
       create_beg();
       display();
       
       create_end();
       create_end();
       display();
       
       create_loc_before();
       create_loc_after();
       display();
       getch();
       }
