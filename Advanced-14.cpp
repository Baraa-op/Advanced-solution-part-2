// advanced solution-14
#include<iostream>
using namespace std;


void Read_Number(int &Num1 , int &Num2)
{
	cout << "enter number 1 : " ;
	cin >> Num1 ;
	
	cout << "enter number 2 : " ;
	cin >> Num2 ;
	
}

void Swap(int &a , int &b)
{
	int Temp ;
	Temp = a ;
	a = b ;
	b = Temp ;
}


void PrintResult(int Num1 , int Num2)
{
	cout << "Number 1 = " << Num1 << "\n";
	cout << "Number 2 = " << Num2 << "\n" ;
}

int main()
{
	int Num1 , Num2 ;
	Read_Number(Num1 , Num2) ;
	cout << "before : " << "\n" ; 
	PrintResult(Num1 , Num2) ;
	Swap(Num1 , Num2) ;
	cout << "after : " << "\n" ;
	PrintResult(Num1 , Num2) ;
	
	
	
	

	return 0 ;
}
