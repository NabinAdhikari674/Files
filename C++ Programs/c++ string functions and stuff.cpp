#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s1("Hello man");
	
	string s2,s3,s4,s5,s6,s7;
	       
		   s2="How are u"; 

	/*
	s2="How are u";
	s3="whats up";
	s4="are you fine";
	s5="lets go";
	
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	*/
	
	//getline(cin,s6);
	//cout<<endl<<s6<<endl;
	
/*	
    //length or size of a string
	cout<<s1.length()<<endl;
	cout<<s1.size()<<endl;
*/
	
/*	
    //concatenation of a string
	cout<<endl<<s1+s2<<endl;
	s3=s1+s2;
	cout<<endl<<s3<<endl;
*/

/*
	//append of a string
	cout<<"s1 = "<<s1<<"\t\ts2= "<<s2;
	s1.append(s2);
	cout<<endl<<s1<<endl;
	
	s1.append(s2,2,5);
	cout<<endl<<"append with limit :  "<<s1<<endl;
*/	
 
/* 
 //erasing from a string
 s1.erase(3,2);
 cout<<"\n\n Erasing with limits (two arguments) : "<<s1<<"\n\n";
 s2.erase(3);
 cout<<"\n\n Erasing with limits (only one argument): "<<s2<<"\n\n";

*/

/* 
   //checking if the string is empty or not.........1=empty(true)....0=not empty(false)   
   cout<<"Checking if s3 is empty : "<<s3.empty()<<endl;
   cout<<"\n\nBefore Erasing : "<<s1.empty()<<endl;
   cout<<s1.erase();
   cout<<"\n\nAfter Erasing : "<<s1.empty()<<endl;
*/
  
/*
   //replacing from a string
   //a whole string cannot be replaced
   cout<<"\n\n Without Replacing : "<<s2<<"\n\n";
   s2.replace(2,3,s1);
   cout<<"\n\n After Replacing : "<<s2<<"\n\n";
   s2.replace(2,3,s1,2,2);
   cout<<"\n\n After Replacing (limit for both strings) : "<<s2<<"\n\n";
*/	
	
/*
	//assigning value to a string
	cout<<"\n\n Before Assigning : "<<s2<<"\n\n";
	s2.assign(s1); //value of  s1 is asigned to s2....both are equal now 
   
    if (s1==s2) //checking if both are equal
    {
    	cout<<"\n\nequal\n\n";
    	
	}
	
	cout<<(s1==s2);  // "1" means equal.. 
	
	cout<<"\n\n After Assigning : "<<s2<<"\n\n";
    	s2.assign(s1,2,2);
        cout<<"\n\n After Assigning (with limits) : "<<s2<<"\n\n";
        
        //giving value
        string s8(8,'*'); //8 times * ........the assigned value must be a character
        cout<<s8;
*/

/*
   //using substring functions
   cout<<"\n\nBefore Substring function : (s2) "<<s2<<endl;
    s3=s2.substr(2,3);
     cout<<"\n\nAfter using Substring function to s3 : "<<s3<<endl;
*/     

/*
	//finding something in a string
	cout<<s2.find("help");   
        	
*/					
}
