// advanced solution-13
#include<iostream>
using namespace std;



void Read_Num(int &Num1 , int &Num2 , int&Num3)
{
	cout << "please enter number 1 : " ;
	cin >> Num1 ;
	
	cout << "please enter number 2 : " ;
	cin >> Num2 ;
	
	cout << "please enter number 3 : " ;
	cin >> Num3 ;
	
	
}

int MaxOf3Num(int Num1 , int Num2, int Num3)
{
	if(Num1 > Num2 && Num1 > Num3)
	{
		return Num1  ;
	}
	else if(Num2 > Num1 && Num2 > Num3)
	{
		return Num2 ;
	}
	else 
		return Num3 ;
}

void PrintResult(int Max)
{
	cout << "max of number is : " << Max ;
}

int main()
{
	int Num1, Num2 , Num3;
	
	Read_Num(Num1, Num2 , Num3) ;
	PrintResult(MaxOf3Num(Num1,  Num2 , Num3)) ;
	
	

	return 0 ;
}
