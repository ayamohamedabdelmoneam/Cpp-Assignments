/*1. Write a program that takes an integer from user then print it
Example
Input 5
Output 5
2. write a program that ask the user to insert 3 numbers then print the sum
Input
Please enter first number:
5
Please enter second number
3
Please enter third number
4
Output
Summation of 3 integers is 12

3. write a program that ask the user to insert 3 integers then print the average as
decimal number
Input
Please enter first number:
6
Please enter second number
4
Please enter third number
4
Output
The average = 4.66667

4. Write a program to compute the perimeter and area of a rectangle. Your code
should ask the user to insert the width and the height
Input(example)
Width = 5
Height = 3
Output
The perimeter = 16
The area = 15

5. Write a program to calculate the sum of the digits of a 3-digit number.
Input : 132
Output : 6

6. Write a program to convert a given integer (in seconds) to hours,
minutes and seconds.
Input seconds: 25300
Expected Output: H:M:S - 7:1:40
7. Write a program that allows the user to insert an integer then print negative if it
is a negative number otherwise print positive.
Example
Input -5
Output negative
Example2
Input 10
Output positive

8. Write a program to read any digit from 1 to 5, display it as a word
ex : input: 4, output: four
9. Write a program that reads 5 numbers and sum of all odd values between
them.
● Test Data :11 17 13 12 5
● Expected Output: Sum of all odd values: 46
10.Write a program that reads a year then check if a year is a leap year or not: a
leap year is divisible by 400 or 4 only
11. take the birth year and check if he is above 18 or not
12.A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask the user to enter marks and print the corresponding grade.
13.Search for Switch Case and use it to write a program that reads an
14.integer between 1 and 12 and print the month of the year in English.
● Test Data :
Insert a number between 1 to 12 to get the month name: 8
● Expected Output: August
15.11.Search for ternary operator and use it to write a program that allows the
16.user to insert integer number then Even or Odd
● Example Input 8 Output even
● Example 2 Input 7 Output odd

17.Write a program that take character from user then if it is vowel chars (a,e,I,o,u)
then print vowel otherwise print consonant
● Example Input o Output vowel
● Example 2 Input b Output consonant
18.13.Write a program that take 3 integer from user then print the max element and
the min element.
● Example
Input 7 8 5
Output
max element = 8
min element = 5
● Example2
Input 3 6 9
Output
Max element = 9
Min element = 3

*/
//                            Answers


                             // Assignment1
 // Q1
/*
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Please Enter Number" << endl;
    cin >> num;
    cout << num;
}
*/
// =====================================================================

        /*                    // Q2

#include <iostream>
using namespace std;
int main()
{
    int x , y , z = 0;
    cout << "Please enter first number" << endl;
    cin >> x;
    cout << "Please enter second number" << endl;
    cin >> y;
    cout << "Please enter tird number" << endl;
    cin >> z;
    cout << "Sumition of 3 integers is " << x + y + z;


}
*/
// =====================================================================
                      // Q3
           /*
#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3 = 0;
    cout << "Please enter first number" << endl;
    cin >> num1;
    cout << "Please enter second number" << endl;
    cin >> num2;
    cout << "Please enter tird number" << endl;
    cin >> num3;
    cout << "The Average is  " << (num1 + num2 + num3) /3;


}
*/
// =====================================================================
                     // Q 4
    /*
#include <iostream>
using namespace std;
int main() {

    float width, height = 0;
    cout << "Please enter width of rectangle" << endl;
    cin >> width;
    cout << "Please enter height of rectangle" << endl;
    cin >> height;
    cout << "The perimeter = " << (height + width) * 2 << endl;
    cout << "The Area  = " << height * width;
}*/
// =====================================================================
                       // Q 5
/*
#include <iostream>
using namespace std;
int main() {
    int number, sum{};
    cout << "Please Enter A Number " << endl;
    cin >> number;
    sum = number % 10; // 2
    number /= 10;  // 13
    sum += number % 10; // 2+ 3
    number /= 10; // 1
    sum += number % 10; // 2+ 3 +1
    cout << sum;
}
*/
// =====================================================================
                             //Q6
/*
#include <iostream>
using namespace std;
int main() {
    int sec, min, hours;
    cout << "Please Enter the number of seconds" << endl;
    cin >> sec;
    min = sec / 60;
    hours = min / 60;
    cout << "H:M:S-" << hours << ":" << min % 60 << ":" << sec % 60;

}*/
// =====================================================================
                    // Q7
/*
#include <iostream>
using namespace std;
int main() {
    int number{};
    cout << "Please Enter the number " << endl;
    cin >> number;
    if (number < 0)
    {
        cout << " negative" << endl;
    }
    else {
        cout << "positive" << endl;
    }
}
*/
// =====================================================================
                               // Q8
/*

#include <iostream>
using namespace std;
int main() {
    cout << "Please Enter Number " << endl;
    int num;
    cin >> num;
    if (num == 1) {
        cout << "one" << endl;

    }
    else if (num == 2) {
        cout << "Two" << endl;
    }
    else if (num == 3) {
        cout << "Three" << endl;
    }
    else if (num == 4) {
        cout << "Four" << endl;
    }
    else if (num == 5) {
        cout << "Five" << endl;
    }
    else {
        cout << "Not Included";
    }
}
 */
 // =====================================================================
                             // Q9
/*
#include <iostream>
using namespace std;
int main() {
    cout << "Please Enter 5 intgers Number" << endl;
    int num1, num2, num3, num4, num5 , sum ;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if (num1 % 2 == 1) {
        sum = num1;
    }
     if (num2 % 2 == 1) {
        sum += num2;
    }
     if (num3 % 2 == 1) {
         sum += num3;
    }
     if (num4 % 2 == 1) {
         sum += num4;
    } if (num5 % 2 == 1) {
        sum += num5;
        }
        cout << "Sumation Of Odd = " << sum;
}*/
// =====================================================================
                         // Q10
/*
#include <iostream>
using namespace std;
int main() {
    cout << " Enter The Year" << endl;
    int year{};
    cin >> year;
    if (year % 4 == 0) {
        cout << " Leap Year";
    }
    else {
        cout << "Is Not A Leap Year";
    }
}*/
// =====================================================================
                     // Q11
/*
#include <iostream>
using namespace std;
int main() {
    cout << " Enter Your Birth Year" << endl;
    int birthYear;
    cin >> birthYear;
    cout << " Enter Current Year" << endl;
    int currentYear;
    cin >> currentYear;

    if (currentYear - birthYear > 18) {
        cout << " Your Age above 18";
    }
    else {
        cout << "Not above 18 ";
    }

}
*/
// =====================================================================
                               // Q12
/*
#include <iostream>
using namespace std;
int main() {
    cout << "Enter Your Grade" << endl;
    int grade{};
    cin >> grade;
    if (grade < 25) {
        cout << 'F';
    }
    else if (grade >= 25 && grade <= 45) {
        cout << 'E';
    }
    else if (grade > 45 && grade <= 50) {
        cout << 'D';
     }
    else if (grade > 50 && grade <= 60) {
        cout << 'C';
    }
    else if (grade > 60 && grade <= 80) {
        cout << 'B';
    }
    else {
        cout << 'A';
    }
}*/
// =====================================================================

                      // Q13
/*
#include <iostream>
using namespace std;
int main() {
    int _month;
    cout << "Please Enter Month Number :" << endl;
    cin >> _month;
    switch (_month)
    {
    case 1 :
        cout << "January";
        break;
    case 2 :
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "Augest";
        break;
    case 9:
        cout << "september";
        break;
    case 10:
            cout << "October";
            break;
        case 11:
                cout << "November";
                break;
        case 12:
            cout << "december";
            break;

    default:
        cout << "Month Number Not Found";
        break;
    }
}

*/

// ==========================================================================


                     // Q14
/*
#include <iostream>
using namespace std;
int main() {
    cout << "Please Enter Number " << endl;
    int num = 0;
    cin >> num;
    cout << (num % 2 == 0 ? "even" : "odd");
}
*/

// ==========================================================================


                           // Q15
/*
#include <iostream>
using namespace std;
int main() {
    cout << " Please Enter Character" << endl;
    char word;
    cin >> word;
    if (word == 'a' || word == 'e' || word == 'l' || word == 'o' || word == 'u')
    {
        cout << "vowel";
    }
    else {
        cout << "consonant";
    }

}
*/

// ==========================================================================

                           // Q16

/*
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, max{}, min{};
    cout << "Plase Enter 3 intgers numbers" << endl;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3) {
        max = num1;
    }
    else if (num2 > num1 && num2 > num3) {
        max = num2;
    }
    else {
        max = num3;
    }
    if (num1 < num2 && num1 < num3) {
        min = num1;
    }
    else if (num2 < num1 && num2 < num3) {
        min = num2;
    }
    else {
        min = num3;
    }
    cout << "Max Element =" << max << endl;
    cout << "Min Element =" << min << endl;
}
*/














