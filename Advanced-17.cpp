// advanced solution-17
#include<iostream>
#include<cmath>
using namespace std;

void Read_Num(float &Num1 , float &Num2)
{
	cout << "half of the base  : " ;
	cin >> Num1 ;
	
	cout << "enter height : " ;
	cin >> Num2 ;
}

float CalclutetriangleArea(float Num1 , float Num2)
{
	float Area = (Num1/2) * Num2 ;
	return Area ; 
}

void PrintResult(float Area)
{
	cout << "the triangle of Area = : " << Area ;
}


int main()
{
	
	float Num1 , Num2;
	
	Read_Num(Num1 , Num2) ;
	
	PrintResult(CalclutetriangleArea(Num1,  Num2) ) ;
	
	
	return 0 ;
}
