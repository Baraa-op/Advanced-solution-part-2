// advanced solution-18
#include<iostream>
#include<cmath>
using namespace std;

void Read_Radius(float &r)
{
	cout << "enter radius : " ;
	cin >> r ;
	
	
}

float CalcluteCircleArea(float r)
{
	const long double PI = 3.14159265358979323846264338327950288419716939937510 ;
	float Area = pow(r , 2) * PI ;
	return Area ; 
}

void PrintResult(float Area)
{
	cout << "the circle of Area = : " << Area ;
}


int main()
{
	
	float r ;
	
	Read_Radius(r) ;
	
	PrintResult(CalcluteCircleArea(r) ) ;
	
	
	return 0 ;
}
