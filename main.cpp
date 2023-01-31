#include <string>
#include <iostream>
#include <fstream> //library that helps us work with streams. allows us to read from files and write to files.
//fstream has data types: fstream for both reading and writing, ifstream for reading input and osfstream for writing output.
using namespace std;

//READING FROM TXT FILES
//1: OPEN FILE
//2: VERIFY IT OPENED
//3: READ FILE
    //3.2: loops to read entire file
//4: CLOSE


int main() {
    ifstream readVar; //create a variable with ifstream data type
    readVar.open("hankTutorial.txt"); //attempts to open file
    if (readVar.is_open()) //verifying if file actually opened.
    {

        int x, y, z; //creates variable to store the data from txt file
        readVar >> x >> y >> z; //here, we store the first int on the first line into x from file.
        cout << x << endl << y << endl << z << endl; //just like using cin, the first number gets stored in first variable and second number to second variable and son on.
        cout << "-----READING VIA LOOP STARTS HERE:" << endl;
        //above needs to be commented out for while loop to run correctly. the for loop will start running at 59 where the above code left off.
        //would have to close file.


        //READING VIA LOOP STARTS HERE:
        int a;
        int total = 0;
        //note: for every iteration, a number gets stored a, then the second gets stored to a. each iteration, a has a new number. bc we are going down the file with while loop. (matter of practice)
        while (readVar >> a) //if it reads the data correctly from file, keep going, if  there's a string, might stop bc we have not created a var for string yet.
        {
            cout << a << endl;
            total = total + a;

        }
        cout << "total: " << total;
    }
    else
    {
        cout << "File was not correctly accessed" << endl;
    }
    readVar.close();
    return 0;
}
/* program output on console:
78
30
28
-----READING VIA LOOP STARTS HERE:
59
total: 59
*/