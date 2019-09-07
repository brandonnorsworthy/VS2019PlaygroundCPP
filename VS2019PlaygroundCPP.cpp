/*
Solution to Project Euler
Problem 20
Copyright Brandon Norsworthy 2019. All rights reserved.

https://github.com/brandonnorsworthy/ProjectEuler
https://projecteuler.net/archives
*/

#include <iostream>
#include <string>
#include <cstring>

char* factorial(int);
char* bigNumberMultiplier(char* number, int multiplier);
const char* bigNumberAdd(char* number, int addend);

int main() {
	std::string inputString = ""; //String so it can be dynamically sized
	int addend = 0; //TEMP VARIABLE TO SEND TO bigNubmerAdd()############

	std::cout << "Starting number: ";
	std::cin >> inputString;
	std::cout << " , Number to be added: ";
	std::cin >> addend;

	if (!inputString.empty())
	{
		//convert to cstring and send off to bigNumberAdd()
		char* inputCString = new char[inputString.length() + 1];
		strcpy_s(inputCString, inputString.length() + 1, inputString.c_str());
		std::cout << atoi(bigNumberAdd(inputCString, addend));
	}

}

//splits a number into factorial to be multiplied and returns total
char* factorial(int input)
{
	char* total = NULL;

	for (int i = 1; i <= input; i++)
	{

	}

	return total;
}

//Multiplication with numbers too big to use in a long long int
char* bigNumberMultiplier(char* number, int multiplier) {
	int additionalSecondPlace = 0;

	for (int i = 0; i < int(strlen(number)); i++)
	{
		//multiply first place


		//add together part

	}

	return number;
}

//Addition with numbers too big to use in a long long int
const char* bigNumberAdd(char* number, int addend)
{
	//only accept numbers that are less than 10
	if (addend > 10)
	{
		std::cout << std::endl << "Warning: bigNumberAdd(char* number, int add) tried to add a number > 10" << std::endl;
		return number;
	}

	//number to in the next place if adding numbers are greater than 10 and need to be added to the next place value
	int tempLeftNumber = 0;
	//add right most number together


	for (int i = strlen(number); i > int(strlen(number)); i--)
	{
		//add right most place and then go right
		std::cout << number[i] << "+" << addend << std::endl;
	}

	return number;
}