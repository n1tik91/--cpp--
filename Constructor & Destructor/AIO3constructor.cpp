//WAP using all three constructors to initialize the data members and display the data members.
#include<iostream>/
using namespace std;
class A
{
	private:
		int a;
	public:
			A()
			{
				a=5;
				cout<<"Default Constructor: "<<a<<endl;
			}
			
			A(int b)
			{
				a=b;
			cout<<"Parameterized constructor: "<<a<<endl;	
			}
			A(A &c)
			{
				a=c.a;
				cout<<"Copy Constructor :"<<a;	
			}
	
};
int main()
{
	A obj,obj1(10);
	A obj2(obj1);
	return 0;
}

