// advanced solution-12
#include<iostream>
using namespace std;



void Read_Num(int &Num1 , int &Num2)
{
	cout << "please enter number 1 : " ;
	cin >> Num1 ;
	
	cout << "please enter number 2 : " ;
	cin >> Num2 ;
	
	
}

int MaxOf2Num(int Num1 , int Num2)
{
	if(Num1 > Num2)
		return Num1  ;
	else 
		return Num2 ;
}

void PrintResult(int Max)
{
	cout << "max of number is : " << Max ;
}

int main()
{
	int Num1, Num2;
	
	Read_Num(Num1, Num2) ;
	PrintResult(MaxOf2Num(Num1,  Num2 )) ;
	
	

	return 0 ;
}
