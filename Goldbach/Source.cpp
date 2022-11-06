#include<iostream>
using namespace std;
class PrimeNumbers {
private: int num1, num2;
public:int nextPrime(int num) {
	num+= 1;
	if (isPrime(num)) {
		return num;
	}
	if (!isPrime(num))
	{
		nextPrime(num);
	}
	
}
public:bool isPrime(int num) {
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
public:bool goldbach(int evenNum) {
	if (evenNum % 2 != 0)
		return false;
	num1 = 2, num2 = 2;

	while (num1 + num2 != evenNum && num1 + num2 < evenNum) {
		num1 = nextPrime(num1);
		if (num1 + num2 > evenNum) {
			num1 = 2;
			num2 = nextPrime(num2);
		}
	}
	if (num1 + num2 == evenNum)
		return true;
	return false;
}
public:void test() {
	int num = 4;
	while (PrimeNumbers::goldbach(num)) {
		cout << PrimeNumbers::num1 << " + " << num2 << " = " << num << endl;
		num += 2;

	}
}
};
int main() {
	PrimeNumbers x;
	x.test();
	
	

	return 0;
}