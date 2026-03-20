#include<iostream>
using namespace std;

int main() {
  int a , b;
  cin >> a >> b;
  cout << "valu of a and b is" << a << " " << b << endl;
}

// if-else else-if//
// *1* //
char ch;
cout << "Enter Char:";
cin >> ch;
if (ch >= 65 && ch <= 90)  {
  cout << "Upercase/n";
} else {
  cout << "Lowercase/n";
}

//*2*//
char ch;
cout << "Enter Char:";
cin >> ch;
if (ch >= 'a' && ch <= 'z')  {
  cout << "lowecase/n";
} else {
  cout << "upercase/n";
}

//*3*//
int marks;
cout << "enter the marks:";
cin >> marks;
if (marks>=90){
  cout << "It is grade of A";
}
else if(marks>=80 && marks<90){
  cout << "It is grade of B";
} else {
  cout << "It is grade of C";
}
 return 0;



 // if-else//
//*4*//
   int n;
   cout << "enter number:";
   cin >> n;
   if(n%2==0) {
    cout << "even number";
   } else {
    cout << "odd number";
   }
   return 0;

//*5*//
  int age;
  cout << "enter age:";
  cin >> age;
  if (age >= 18) {
    cout << "you can vote\n";
  } else {
    cout << "you can't vote\n";
  }
  return 0;

//*6*//
  int n = 5;
  if(n>=0) {
    cout<< "n is positive\n";
  } else {
    cout << "n is negative\n";
  }
  return 0 ;





