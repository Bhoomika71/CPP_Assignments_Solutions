//Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
int square(int n){
    int sq= 1;
    for(int i=1; i<=n;i++){
        cout<<i*i<<endl;
    }
}
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    square(n);
}

//Q2 : Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
int Area(int n){
   int  A= 3.14*n*n;
   return A;
}
int main(){
    int r;
    cout<<"enter radius:";
    cin>>r;
    Area(r);
}

//Q3: Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
int odd(int a,int b){
   for(int i =a; i<=b;i++){
    if(i%2!=0){
        cout<<i<<endl;
    }
   }
}
int main(){
    int a,b;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    odd(a,b);
    return 0;
}

//Q4: Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int  square(int n){
    int  count = 0;
    int sq=1;
    while(n>0){
        n/=10;
     count ++;
     sq= count*count;
    }  
    cout<<"no. of digit:"<<count<<endl;
    cout<<"square of the count:"<<sq;
}
int main(){
    int n;
    cout<<"enter value:";
    cin>>n;
    square(n);
    return 0;
}

Q5: The minimum number of functions present in any C++ program is:

Ans: Infinite

Q6: State True and False:
1. A function may be called more than once from any other function: TRUE
2. It is necessary for a function to return some value.FALSE