#include<iostream>
using namespace std;
//destructured into a function that is refactored;
//here bool is returned from the function;
bool isPrimeNumber(int number) {
	for (int i = 2; i < number; i++) { 
		if (number % i == 0) {
			return false;
			
		}
	
	}
	return true;
}

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	bool isPrimeFlag = isPrimeNumber(number);// we recieve the returned function as boolean and then follow the code further.

	//for (int i = 2; i < number; i++) { //since we already know that 1 divideds all numbers and also the number divides itself  we start from 2 and end at number-1;
	//	if (number % i == 0) {
	//		isPrimeFlag = false;
	//		break;
	//	}
	//}
	if (isPrimeFlag) {
		cout << "It is a prime number" << endl;
	}
	else {
		cout << "It is not a prime number" << endl;
	}


	system("pause>0");
}