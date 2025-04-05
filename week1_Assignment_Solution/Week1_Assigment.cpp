//1. How can you output “Physics” and “Wallah” in two different lines in C++?
#include<iostream>
using namespace std;
int main() {
    cout << "Physics" << endl;
    cout << "Wallah" << endl;
    return 0;
}

//2. Write a program to print 10 using 2 positive numbers less than 6 in C++ as output.
#include <iostream>
using namespace std;
int main() {
    cout<<"output: "<<5*2<<endl;
    cout<<"output: "<<5+5;
    return 0;
}
// 3. How much space does the following data types take?
// -------------------------------
// int = 4 bytes (typical)
// bool = 1 byte
// float = 4 bytes

//4. What is the output of this program?
#include <iostream>
using namespace std;
int main() {
    int a = 4;
    int b = 5;
    a++, b--;
    cout << ++a << " " << b--;
    }
Output: 6 4

//5. Write a program to find the circumference of a circle with radius 10 in C++.
#include<iostream>
using namespace std;
int main(){
    int r =10;
    int circumference;
    circumference = 2*3.14*r;
    cout<<"circumference :"<< circumference;
    return 0 ;
}


//6. How many of these can be a variable name ?
// 01Pwskills
// _FLOAT
// int
// FLOAT
// You will succeed
Answer : only  _FLOAT and FLOAT can be the variable names