﻿#include <iostream>
using namespace std;


/*
//1. Дано натуральное число n.Выведите все числа от 1 до n.

int main() 
{
	int n = 5;

	static int x = 0;

	x++; 

	cout << x << "\t"; 

	if (x < n) main(); 
}
*/

/*
//2. От A до B.
//Даны два целых числа A и В.Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.

int main()
{
	int A = 5;
	int B = 1;

	if (A < B)
	{
		static int x = A-1;
		x++;
		cout << x << "\t";
		if (x < B) main();
	}
	else
	{
		static int x = A+1;
		x--;
		cout << x << "\t";
		if (x > B) main();
	}
}
*/


//Дано натуральное число N.Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//Операцией возведения в степень пользоваться нельзя!

int main()
{
	int N = 9;

	static int x = 1;

	x*=2;


	if (x == N)
	{
		cout << "YES" << "\n";
	}
	else if (x > N)
	{
		cout << "NO";
	}

	if (x < N) main();


}


