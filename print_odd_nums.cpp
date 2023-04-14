#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "\nPlease Enter Maximum limit Value to print Odd Numbers =  ";
	cin >> number;
	
	cout << "\nList of Odd Numbers from 1 to " << number << " are\n"; 
	for(int i = 1; i <= number; i++)
  	{
  		if ( i % 2 != 0 )
  		{
  			cout << i <<" ";
		}	
  	}
		
 	return 0;
}
