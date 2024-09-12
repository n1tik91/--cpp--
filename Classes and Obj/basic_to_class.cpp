// basic to class using constructor
#include<iostream>
using namespace std;
class X
{
	  int a;
  public:
  	X(int m)
	{
		a=m;
		cout<<a;
	}
	
	
	
};
int main()
{
	int y=50;
	X obj(y);
	
	return 0;
	
}

