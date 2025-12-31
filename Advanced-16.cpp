// advanced solution-16
#include<iostream>
#include<cmath>
using namespace std;

void Read_Num(float &Num1 , float &Num2)
{
	cout << "side area of Rectangle : " ;
	cin >> Num1 ;
	
	cout << "enter diagonal : " ;
	cin >> Num2 ;
}

float CalcluteRectangleArea(float Num1 , float Num2)
{
	float Area = Num1 * sqrt(pow(Num2 , 2) - pow(Num1 , 2));
	return Area ; 
}

void PrintResult(float Area)
{
	cout << "the Rectangle of Area = : " << Area ;
}


int main()
{
	
	float Num1 , Num2;
	Read_Num(Num1 , Num2) ;
	
	PrintResult(CalcluteRectangleArea(Num1,  Num2) ) ;
	
	
	return 0 ;
}
