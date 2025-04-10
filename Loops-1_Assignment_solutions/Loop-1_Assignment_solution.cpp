//1.Print all the odd numbers from 1 to 100.
#include<iostream>
using namespace std;
int main(){
    int i;
    for(int i= 1; i<=100;i++){
        if(i%2 !=0)   
        cout<<i<<endl;;
        }
    }

//2. Print all numbers from 1 to 100 that are divisible by 3
#include<iostream>
using namespace std;
int main(){
    int i;
    for(int i= 1; i<=100;i++){
        if(i%3 ==0)   
        cout<<i<<endl;;
        }
    }

//3.Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
#include<iostream>
using namespace std;
int main(){
    int n, product;
    cout<<"enter number :"<<endl;
    cin>>n;
    for(int i= 1; i<=10;i++){
        product = n*i;
        cout<<product<<endl;;
        }
    }

//4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n,a = 4;
    cout<<"enter number: ";
    cin>>n;
    for(int i= 1; i<=n;i++){
        cout<<a<<endl;
        a = a+3 ;
        
        }
    }

//5.Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n,a = 3;
    cout<<"enter number: ";
    cin>>n;
    for(int i= 1; i<=n;i++){
        cout<<a<<endl;
        a*=4;
        
        }
    }

//6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include<iostream>
using namespace std;
int main(){
   int i= 65;
    while(i <=120){

        cout<<"Ascii value of : "<<(char) i<<" "<< i<<endl;
        i++;
    }
}