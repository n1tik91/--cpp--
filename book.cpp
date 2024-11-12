#include<iostream>
#include<fstream>
using namespace std;
	class A
	{
		public:
	
		string name;
		int roll_no;
		int marks;
	
      A()
	{
	
	    cout<<"Enter your name";
	    getline(cin, name);
     	cout<<"Enter your roll number: ";
    	cin>>roll_no;
	    cout<<"Enter your marks: ";
	    cin>>marks;
	};
	
		 void display()
		 {
		 	cout<<"Name: "<<name<<endl;
		 	cout<<"Roll no: "<<roll_no<<endl;
		 	cout<<"Marks: "<<marks;
		 }
	};
int main()
{
	A obj;
	obj.display();
   ofstream writeFile;// creates file and write stuffs in it
	writeFile.open("book.txt");
	if(!writeFile){
		cout<<"Noob file nai banena";
	};
    writeFile<<obj.name <<endl;
    writeFile<<obj.roll_no<<endl;
    writeFile<<obj.marks<<endl;
    
    writeFile.close();
	
	
}
