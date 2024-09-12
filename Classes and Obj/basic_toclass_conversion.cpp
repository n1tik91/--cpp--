//WAP to convert celcius into fahreinheit by using basic to class conversion 
//using both methods i)constructor and ii)operator overloading
#include<iostream>
using namespace std;
class A
{
	private:
	   float f,c;
	public:
	   A(int c)
	{
		f= c*(9/5) + 32;
		cout<<f<<endl;
	}
	void getTemperature() {
      cout << "Enter Temperature in Celsius:";
      cin >>c;
    } 

	double CToF() 
	{
    float f;
    f = (c * 9) / 5 + 32;
    return f;
  }
  
};
int main()
{
	A obj(100),obj1(10);
	obj1.getTemperature();
    float t=obj1.CToF();
    cout << "Temperature in Fahrenheit : " << t;
	return 0;
}
