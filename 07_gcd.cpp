#include <iostream>
using namespace std;
int findGCD(int x, int y)
{
	if (y==0)
	    return x;
	return findGCD(y, x%y);
}
int main()
{
	int x, y, result;
	cout<< "enter 2 number: ";
	cin>>x>>y;
	result= findGCD(x,y);
	if (result<0)
	   {
	       result=result*-1;
	       cout<<"GCD is: "<<result;
	   }
	else
	       cout<<"GCD is: "<<result;
	
	return 0;
}
