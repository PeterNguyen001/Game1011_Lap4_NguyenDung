#pragma once

#include <iostream>
#include <string>
using namespace std;

 bool palindrome(string s, int min, int max)
{
	 if (max == min || max - min == 1)
	 {
		 if (s[min] == s[max])
			 return true;
		 else return false;
	 }
	 else 
	 {
		 if (s[min] == s[max])
		 {
			 min++;
			 max--;
			 palindrome(s, min, max);
		 }
		 else
			 return false;
	 }
}

 void sort(int s[] , int min, int max)
 {

	 if (min < max)
	 {
		 for (int i = 0; i < max; i++)
		 {
			 int temp = s[i];
			 int maxx = s[i];
			 if (s[i + 1] > maxx)
			 {
				 maxx = s[i + 1];
				 s[i] = maxx;
				 s[i + 1] = temp;
			 }
		 }
		 min++;
		 sort(s, min, max);
	 }
 }

 void reverse(string s, int min, int max)
 {
	 if (max == min || max - min == 1)
	 {
		 char temp = s[min];
		 s[min] = s[max];
		 s[max] = temp;
		 cout << s;
	 }
	 else
	 {
		 char temp = s[min];
		 s[min] = s[max];
		 s[max] = temp;
		 min++;
		 max--;
		 reverse(s, min, max);
	 }

 }