// advanced solution-11
#include<iostream>
using namespace std;

enum enPassFail{Pass = 1 , Fail = 2 };


void Read_Num(int &Mark1,int &Mark2,int&Mark3)
{
	cout << "enter mark 1 : " ;
	cin >> Mark1 ;
	
	cout << "enter mark 2 : " ; 
	cin >> Mark2 ;
	
	cout << "enter mark 3 : " ;
	cin >> Mark3 ;
}




int SumOf3Num(int &Mark1,int &Mark2,int&Mark3)
{
	return Mark1 + Mark2 + Mark3 ;
	
}

float CalculateAverage(int &Mark1,int &Mark2,int&Mark3)
{
	return (float)SumOf3Num(Mark1 , Mark2 ,Mark3) / 3 ;
}


enPassFail CheckAvrage(float Average)
{
	if(Average >= 50)
		return enPassFail::Pass ;
	else
		return enPassFail::Fail ;
}

void PrintResult(int Avrage)
{
	cout << "\ntotal of sum : " << Avrage << endl ;
	if(CheckAvrage(Avrage) == enPassFail::Pass)
		cout << "\nyou passed " ;
	else 
		cout << "\nyou Failed " ;
}




int main()
{
	int Mark1 , Mark2 , Mark3 ;
	Read_Num(Mark1 , Mark2 ,Mark3) ;
	PrintResult(CalculateAverage(Mark1 , Mark2 ,Mark3)) ;
	
	

	return 0 ;
}
