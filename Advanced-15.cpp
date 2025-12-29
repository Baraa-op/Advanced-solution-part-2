// advanced solution-15
#include<iostream>
using namespace std;

void Read_Num(float &Num1 , float &Num2)
{
	cout << "enter height: " ;
	cin >> Num1 ;
	
	cout << "enter width: " ;
	cin >> Num2 ;
}

float CalcluteRectangleArea(float Num1 , float Num2)
{
	return Num1 * Num2 ;
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
