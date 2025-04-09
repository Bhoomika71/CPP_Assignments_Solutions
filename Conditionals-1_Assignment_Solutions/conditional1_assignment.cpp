//1. Take 2 integers input and print the greatest of them
#include<iostream>
using namespace std;
int main(){
    int a =5;
    int b =7;
    if(a>b){
         cout<<"first number "<< a<<" is largest"<<endl;
    }
    else
    {  cout<<"second number "<<b<<" is largest"<<endl;
    }
return 0;
}

//2. Given the radius of the circle, predict whether numerically the area of this
//  circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    int r=4;
    int area, circumference;
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    if(area>circumference){
         cout<<"Area is greater than circumference"<<endl;
    }
    else
    {  cout<<"Circumference is greater than area"<<endl;
    }
return 0;
}

//3. Any year is input through the keyboard. Write a program to determine whether the year is a leap year
//or not. (Considering leap year occurs after every 4 years)
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;
    if(year%4==0){
         cout<<year<<" 1is a leap year"<<endl;
    }
    else
    {  cout<<year<<" is not a leap year"<<endl;
    }
return 0;
}

//4. Given the length and breadth of a rectangle, write a program to find whether numerically the area of
//the rectangle is greater than its perimeter.
//Input 1: length = 5 breadth = 7
#include<iostream>
using namespace std;
int main(){
    int l = 5;
    int b = 7;

    int area, perimeter;
    area = l*b;
    perimeter = 2*(l+b);
    if(area>perimeter){
         cout<<"Area is greater than perimeter"<<endl;
    }
    else
    {  cout<<"Perimeter is greater than area"<<endl;
    }
return 0;
}

//5. Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
//isosceles triangle.
//Input : side1 = 5 side2 = 4 side3 = 4
#include<iostream>
using namespace std;
int main(){
    int side1 = 5;
    int side2 = 4;
    int side3 = 4;
    if (side1 == side3 && side3 == side2){
        cout<<"it is an equilateral  triangle"<<endl;
        }
        else if(side1 == side2 || side1 == side3 || side2 == side3){
            cout<<"it is an  Isosceles triangle";
        }
        else
        { 
        cout<<"it is a scalene triangle"<<endl;
    }
return 0;
}

//6. If the marks of A, B and C are input through the keyboard, write a program to determine the student
//scoring the least marks.
//Input 1: A = 23 , B = 34 , C = 71
#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter the first marks: "<<endl;
    cin>>A;
    cout<<"Enter the Second marks: "<<endl;
    cin>>B;
    cout<<"Enter the third marks: "<<endl;
    cin>>C;
    if(A<B && A<C){
         cout<<A<<" is Least marks"<<endl;
    }
    else if ( B<A && B<C){
        cout<<B<<" is least marks"<<endl;
    }
    else
    {  cout<<C<<" is Least marks "<<endl;
    }
return 0;
}

//7. Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
//Input 1: 2 0
#include<iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Point is at the Origin";
    } else if (x == 0) {
        cout << "Point lies on the Y-axis";
    } else if (y == 0) {
        cout << "Point lies on the X-axis";
    } else {
        cout << "Point lies in the plane but not on any axis";
    }

    return 0;
}


//8. Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
//Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
#include<iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        cout << "The points lie on the same straight line";
    } else {
        cout << "The points do not lie on the same straight line";
    }

    return 0;
}


//9. Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    int ascii = int(ch);
    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) {
        cout << ch << " is an alphabet" << endl;
    }
    else if (ascii >= 48 && ascii <= 57) {
        cout << ch << " is a digit" << endl;
    }
    else {
        cout << ch << " is a special character" << endl;
    }

    return 0;

}

//10.Predict the output of the below code:
#include<iostream>
using namespace std;
int main() {
int a = 500, b, c;
if (a >= 400)
b = 300;
c = 200;
cout << "value of b and c are respectively " << b << " and " << c;
return 0;
}
 
// output
//value of b and c are respectively 300 and 200