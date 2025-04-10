/*Assignment 3

Nested Loops Tasks:
Write a program to print right triangle number pattern series using loop.
Example:
Input:5
Output:
1
22
333
4444
55555
Write a program to print hollow right triangle star pattern series using loop.
Example:
Input rows: 6
output
*
* *
* *
* *
* *
* * * * * *
Write a program to print inverted right triangle star pattern series using loop.
Example:
Input rows: 6
output
******
*****
****
***
**
*
Write a program to take a number and find a list of non-prime numbers from 1 to
this number.
Example:

5.

Input:25.
Output: 4 6 8 9 10 12 14 15 16 18 20 21 22 24 25.
Write a program in C++ to input any number and print it in words.
Example:
Input:8309.
Output: Eight Three Zero Nine

1D Array Tasks: Assume the size of array to be 10 or 5 or as you like:
6. Write a program to input elements in an array from the user and count even and
odd elements in the array.
Example:
Input array: 1 2 3 4 5 6 7 8 9
Total even elements: 4
Total odd elements: 5

7. Write a program to input elements in an array and search whether an element
exists in the array or not.
Input elements in array: 10, 12, 20, 25, 13, 10, 9, 40, 60, 5
Element: 25 output
Element found at index 3

8. Write a C++ program to count the number of occurrences of a given number in
an array of integers. Example:
Input: 7
Array 5, 7, 8, 8, 5, 8, 7, 7 output :
Number of occurrences of 7 : 3
9. Write a program to input elements in an array and copy all elements of the first
array into the second array.
Input array1 elements: 10 1 95 30 45 12 60 89 40 -4
output
Array1: 10 1 95 30 45 12 60 89 40 -4
Array2: 10 1 95 30 45 12 60 89 40 -4

10.Write a program to input elements in array then print all unique elements in array.

Input array elements: 1, 2, 3, 5, 1, 5, 20, 2, 12, 10
Output
All unique elements in the array are: 3, 20, 12, 10

11.Write a program to input elements in an array and find two numbers whose sum
equals the last element in the array .
Example:
Input: 1, 5, 7, 5, 8, 9, 11, 12
Output:
Array pairs whose sum equal to 12:
1,11
5,7
7,5
12. Given a list of integers, determine whether the sum of its elements is odd or
even.
Give your answer as a string matching "odd" or "even".
If the input array is empty, consider it as: [0] (array with a zero).
Examples:
Input: [0]
Output: "even"
Input: [0, 1, 4]
Output: "odd"
Input: [0, -1, -5]
Output: "even"
13. Given an array of integers, return the additive inverse of each. Each positive
becomes negative, and the negative becomes positive.
Example (Input => Output):
[1,2,3,4,5] == [-1, -2, -3, -4,-5]
[1, -2,3, -4,5] == [-1,2,-3,4,-5]
14. Given an array of integers, return a new array with each value doubled.
For example:
[1, 2, 3] --> [2, 4, 6]
15. You will be given an array of integers whose elements have both a negative
and a positive value, except for one integer that is either only negative or only
positive. Your task will be to find that integer.
Examples:
[1, -1, 2, -2, 3] => 3
3 has no matching negative appearance.
[-3, 1, 2, 3, -1, -4, -2] => -4
-4 has no matching positive appearance.
[1, -1, 2, -2, 3, 3] => 3
(The only positive or only negative integer may appear more than once)

16. Write a CPP program to delete an element from an array at a specified
position.
Example
Input
Input array elements: 10 20 30 40 50
Input position to delete: 2
Output: Array elements: 10, 30, 40, 50

BONUS PROBLEMS:

12.Write a program to print an equilateral triangle or Pyramid star pattern series
of n rows using a loop. Input rows: 5

*
***
*****
*******
*********

13.Write a program to print a rhombus star pattern of N rows using a loop.
Enter number of rows: 6
******
******
******
******
******
******
*/
//                                Answers
#include <iostream>
using namespace std;

// ======== Assignment 3 Solution =======

/*
1.
Write a program to print right triangle
number pattern series using loop.
Example:
Input:5
Output:
1
22
333
4444
55555

*/

/*
int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}
*/

//======================================
/*
2.

Write a program to print hollow right
triangle star pattern series using loop.
Example:
Input rows: 6
output:

*
*   *
*     *
*       *
*         *
* * * * * *

*/

/*
int main() {
	int h;
	cin >> h;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == j|| i == h || j == 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
*/

//======================================
/*
3.

Write a program to print inverted right
triangle star pattern series using loop.
Example:
Input rows: 6
output
******
*****
****
***
**
*

*/

/*
int main() {
	int h;
	cin >> h;
	for (int i = 1; i <= h; i++) {
		for (int j = h; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}
}
*/

//======================================
/*
4.

Write a program to take a number and
find a list of non-prime numbers from 1 to
this number.
Example:
Input:25.
Output:
4 6 8 9 10 12 14 15 16 18 20 21 22 24 25.

*/

/*
int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		int count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				count++;
		}
		if (count != 2)
			cout << i << " = Non Prime\n";
	}
}
*/

//======================================
/*
5.

Write a program in C++ to input any number
and print it in words.
Example:
Input:8309.
Output: Eight Three Zero Nine

*/

/*
int main() {
int num, rev = 0;
	cin >> num;
	for (; num > 0;) {
		rev = (rev * 10) + (num % 10);
	    num /= 10;
	}

	for (int i = rev; i > 0; i /= 10) {
	    switch (i % 10) {
			case 0:
				cout << "Zero ";
				break;
			case 1:
				cout << "One ";
				break;
			case 2:
				cout << "Two ";
				break;
			case 3:
				cout << "Three ";
				break;
			case 4:
				cout << "Four ";
				break;
			case 5:
				cout << "Five ";
				break;
			case 6:
				cout << "Six ";
				break;
			case 7:
				cout << "Seven ";
				break;
			case 8:
				cout << "Eight ";
				break;
			case 9:
				cout << "Nine ";
				break;
	    }
	}

}
*/

//======================================
/*
6.

Write a program to input elements in an array from the user
and count even and
odd elements in the array.
Example:
Input array: 1 2 3 4 5 6 7 8 9
Total even elements: 4
Total odd elements: 5

*/

/*
int main() {
	int oddCount{}, evencount{}, arr[10];
	cout << "Enter Array : ";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			evencount++;
		else
			oddCount++;
	}
	cout << "Even numbers = " << evencount << endl;
	cout << "Odd numbers = " << oddCount << endl;
}
*/

//======================================
/*
7.

Write a program to input elements in an
array and search whether an element
exists in the array or not.
Input elements in array:
10, 12, 20, 25, 13, 10, 9, 40, 60, 5
Element : 25
output
Element found at index 3

*/

/*
int main() {
	int num, arr[10];
	int flag = -1;

	cout << "Enter Array : ";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	cout << "Enter a num : ";
	cin >> num;

	for (int i = 0; i < 10; i++) {
		if (num == arr[i]) {
			flag = i;
			break;
		}
	}

	if (flag != -1) {
		cout << num << " is founded at index = " << flag;
	}
	else {
		cout << num << "is not founded\n";
	}
}
*/

//======================================
/*
8.

Write a C++ program to count the number
of occurrences of a given number in
an array of integers.
Example:
Input: 7
Array 5, 7, 8, 8, 5, 8, 7, 7
output : Number of occurrences of 7 : 3

*/

/*
int main() {
	int arr[10]{}, num, count{};
	cout << "Enter Array : \n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "Enter Element : ";
	cin >> num;
	for (int i = 0; i < 10; i++) {
		if (num == arr[i])
			count++;
	}
	cout << "Number of occurrences of "
		<< num << " = " << count << '\n';

}
*/

//======================================
/*
9.

Write a program to input elements in an
array and copy all elements of the first
array into the second array.
Input array1 elements:
10 1 95 30 45 12 60 89 40 -4
output
Array1: 10 1 95 30 45 12 60 89 40 -4
Array2: 10 1 95 30 45 12 60 89 40 -4

*/

/*
int main() {
	int arr1[10], arr2[10];
	cout << "Enter Array : \n";
	for (int i = 0; i < 10; i++) {
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}
	cout << "Array1 : ";
	for (int i = 0; i < 10; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "Array2 : ";
	for (int i = 0; i < 10; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;

}
*/

//======================================
/*
10.

Write a program to input elements in array
then print all unique elements in array.
Input array elements:
1, 2, 3, 5, 1, 5, 20, 2, 12, 10
Output
All unique elements in the array are:
3, 20, 12, 10
*/

/*
int main() {S
	int arr[10], count = 0;
	cout << "Enter Array : \n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	cout << "All unique elements in the array are : ";
	for (int i = 0; i < 10; i++) {
		count = 0;
		for (int j = 0; j < 10; j++) {
			if (arr[i] == arr[j])
				count++;
		}
		if (count == 1) {
			cout << arr[i] << " ";
		}
	}
}
*/

//======================================
/*
11.

 Write a program to input elements in an
array and find two numbers whose sum
equals the last element in the array .
Example:
Input: 1, 5, 7, 5, 8, 9, 11, 12
Output:
Array pairs whose sum equal to 12:
1,11
5,7
7,5

*/

/*
int main() {
	int arr[10];
	cout << "Enter Array : ";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	int num = arr[9];
	cout << "Array pairs whose sum equal to "
		 << num << " :\n";
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] + arr[j] == num) {
				cout << arr[i] << " , "
					 << arr[j] << endl;
			}
		}
	}
}
*/


//======================================
/*
12.

 Given a list of integers, determine
whether the sum of its elements is odd or even.
Give your answer as a string matching "odd" or "even".
If the input array is empty, consider it as:
[0] (array with a zero).
Examples:
Input: [0]
Output: "even"
Input: [0, 1, 4]
Output: "odd"
Input: [0, -1, -5]
Output: "even"

*/

/*
int main() {
	int arr[10],sum=0;
	cout << "Insert values : ";
	for (int i = 0; i <10; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum % 2 == 0) {
		cout << "Sum of array elements is even";
	}
	else {
		cout << "Sum of array elements is odd";
	}
}
*/
//======================================
/*
13.

 Given a set of numbers, return the additive
inverse of each. Each positive becomes negative,
and the negative becomes positive.
Example (Input => Output):
[1,2,3,4,5] == [-1, -2, -3, -4,-5]
[1, -2,3, -4,5] == [-1,2,-3,4,-5]


*/

/*

int main() {
	int arr[10];
	cout << "Insert values : ";
	for (int i = 0; i <10; i++) {
	     cin >> arr[i];
             arr[i] *= -1;
 	}
	for (int i = 0; i < 10; i++) {
		cout <<arr[i]<<"  ";
	}
}
*/

//======================================
/*
14.
Given an array of integers, return a new
array with each value doubled.
For example:
[1, 2, 3] --> [2, 4, 6]
*/

/*
int main() {
	int arr[10], newArr[10];
	cout << "Insert values : \n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		newArr[i] = 2 * arr[i];
	}

	cout << "The Doubled values : \n";
	for (int i = 0; i < 10; i++) {
		cout << newArr[i] << "  ";
	}
}
*/

//======================================
/*
15.
You will be given an array of integers whose
elements have both a negative and a positive value,
except for one integer that is either only negative
or only positive. Your task will be to find that integer.
Examples:
[1, -1, 2, -2, 3] => 3
3 has no matching negative appearance.
[-3, 1, 2, 3, -1, -4, -2] => -4
-4 has no matching positive appearance.
[1, -1, 2, -2, 3, 3] => 3
(The only positive or only negative integer may appear more than once)
*/

/*
int main() {
	int arr[10];
	cout << "Insert values : \n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	cout << "The only positive or only negative numbers are : ";
	for (int i = 0; i < 10; i++) {
		bool flag = false;
		for (int j = 0; j < 10; j++) {
			if (arr[i]==-arr[j])
				flag = true;
		}
		if (!flag)
			cout << arr[i] << " ";
	}
}
*/

//======================================
/*
16.
Write a CPP program to delete an element from an array at a specified position.
Example
Input
Input array elements: 10 20 30 40 50
Input position to delete: 2
Output: Array elements: 10, 30, 40, 50
*/

/*
int main() {
	int arr[10]{}, position;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "Enter a Position to delete: ";
	cin >> position;
	for (int i = position - 1; i < 9; i++) {
		arr[i] = arr[i + 1];
	}
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
}
*/
//======================================
/*
Bounce 1:.

 Write a program to print an equilateral
triangle or Pyramid star pattern series
of n rows using a loop.
Input rows: 5
    *
   ***
  *****
 *******
*********

*/

/*
int main() {
	int h;
	cout << "Input rows: ";
	cin >> h;

	for (int i = 1; i <= h; i++) {
		for(int j = h; j > i; j--) {
			cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			cout << "*";
		}
		cout << endl;
	}
}
*/

//======================================
/*
Bounce 2:.

 Write a program to print a rhombus star
pattern of N rows using a loop.
Enter number of rows: 6

*/

/*
int main() {
	int h;
	cout << "Input rows: ";
	cin >> h;

	for (int i = 1; i <= h; i++) {
		for (int j = i; j <= h; j++) {
			cout << " ";
		}
		for (int j = 1; j <= h; j++) {
			cout << "*";
		}
		cout << endl;
	}

}
*/
