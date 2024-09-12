//WAP to using ctoB using casting op to find simple interest
#include<iostream>
using namespace std;
class SI{
	
private:
	int p,t,r,Si;
public:
	SI()
	{
		cout<<"Enter principal, time and rate:"<<endl;
	    cin>>p>>t>>r;
	    Si=(p*t*r)/100;
	}
	
	operator float()
	{
	return Si;
	}
	
};
int main()
{
	SI obj;
	float Si;
	Si=obj;
	cout<<"Simple Interest is :"<<Si;
	
	
	
	return 0;
}
