#pragma once
#include "Lap4.h"
#include <stdlib.h>     
#include <time.h>



int main()
{
	srand(time(NULL));
	//test palindrome
	string s = "radar";
	if (palindrome(s, 0, s.length()-1))
		cout << "true\n";
	else
		cout << "false\n";

	string d = "papa";
	if (palindrome(d, 0, d.length() - 1))
		cout << "true\n";
	else
		cout << "false\n";

	//test sort
	int ranNum = rand();
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand();
		cout << arr[i] << ", ";
	}
	cout << endl << "sorting\n";
	sort(arr, 0, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ", ";
	}
	//test reverse
	reverse(d, 0, d.length()-1);

}