//1.Predict the output
#include <bits/stdc++.h>
using namespace std;
int main() {
while ('1' < '2')
cout << "In while loop" << endl;
}
//output: In while loop but 1 ascii value is always less than ascii value of 2 so it will go infinity

//2,Predict the output

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int t = 10;
while (t /= 2) {
cout << "Hello" << endl;
}
}

//output: it will also go infinity printing "hello" because t/=2 is always 5

//3.Predict the output

#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}
//output :
//it will print "In for loop" for 3 times as 4*4 =16 will be greater than 10 so the loop will stop

Predict the output

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
x-- ;
y++ ;
cout << x << " " << y << endl ;
}
}

//output:
9 1
8 2
7 3 
6 4
5 5
// now the loop will stop as x=4 , y=6

//5. WAP to print the sum of all the even digits of a given number.
//Sample Input : 4556
//Output: 10
#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0, lastdigit= 0;
    cout<<"Enter number: "<<endl;
    cin>>n;
    while(n>0){
        lastdigit =n%10;
        if(lastdigit%2==0){
           sum += lastdigit;
         } 
         n/=10;
        }
        cout<<sum;
return 0 ;
}

//6. WAP to print the sum of a given number and its reverse.
//Sample Input : 12
//Sample Output : 33 [12+21]
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    int num = n, lastdigit= 0,reverse=0;
    while(num >0){
    reverse*=10;
    lastdigit = num %10;
    reverse += lastdigit;
    num/=10;
    }
int total = n + reverse;
cout<<n<<"+"<<reverse<<"="<<total;
return 0 ;
}

//7. Print the factorials of first ‘n’ numbers
//Sample Input : 10
#include<iostream>
using namespace std;
int main()
{
    int n, fact =1;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(int i =1;i<=n;i++){
        fact *= i;
        cout<<fact<<endl;
        }
       
return 0 ;
}

//8. Print first ‘n’ fibonacci numbers.
//Sample Input : 10
#include<iostream>
using namespace std;
int main()
{
    int n, fib =0;
    cout<<"Enter number: "<<endl;
    cin>>n;
    int a=0, b =1;
    for(int i =1;i<=n;i++){
        fib = a+b;
        a= b;
        b= fib;
        cout<<fib<<endl;
        }
        
       
return 0 ;
}

//9. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong
//number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
#include <iostream>
using namespace std;
int main() {
    cout << "Armstrong numbers between 1 and 500 are:\n";

    for (int n = 1; n<= 500; n++) {
        int original = n;
        int sum = 0;

        while (original > 0) {
            int digit = original % 10;
            sum += digit * digit * digit; 
            original = original / 10;
        }

        if (sum == n) {
            cout << n << endl;  
        }
    }

    return 0;
}
