#include<iostream>
using namespace std;

int main()
{ // C++ program to take stream of N numbers from the user on the fly and print the sum
 int n, sum=0;
 cout <<"Enter howmany numbers:" <<endl;
 cin >> n;

do
{ int num;
cout <<"Enter the number:" <<endl;
cin>>num;
sum +=num;
n--;

} while (n>0);

cout <<"The sum is:" <<sum;

return 0;
}