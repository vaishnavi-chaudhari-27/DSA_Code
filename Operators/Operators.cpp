#include<iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 5;
  
    cout<<"a&b"<< (a&b) << endl;
    cout<<"a|b"<< (a|b) << endl;
    cout<<"~a"<< ~a << endl;
    cout<<"a^b"<< (a^b) << endl;

    // increment
   int  i = 7;
   cout<< (++i) << endl;
   cout<< (i++) << endl;
   cout<< (i--) << endl;
   cout<< (--i) << endl;

    //  que1
    int a, b = 1;
    a = 10;
    if (++a)
    cout << b;
    else 
    cout << ++b;

    // que2
    int a = 1;
    int b = 2;

    if(--a > 0 && ++b > 2){
        cout << "Stagel - Inside If";
    } else {
        cout << "Stage2 - Inside else";
    }
    cout << a << " " << b << endl;


    // que3
    int number = 3;
    cout << (25 * (++number));

    // que4
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b;
    cout << c;

    // que5
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    // que6
    cout << "printing count from 1 to n" << endl;
    int i = 1;
    for(; ;) {
        if(i<=n){
            cout << i << endl;
        } else {
            break;
        }
        i++;
    }

    // que7
    for(int a = 0 , b = 1 , c = 2; a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout << a << " "  << b << " " << c << endl;
    }

    // Fibonacci series que8
     int n = 15;

     int a = 0;
     int b = 1;
     cout << a << " " << b << " ";

     for(int i=1; i<=n; i++){
        int nextNumber = a+b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
     }

    // prime number que9

     int n;
     cout << "enter the value of n" << endl;
     cin >> n;

     bool isprime = 1;

     for(int i=2; i<n; i++){
        if(n%i == 0){
            isprime = 0;
            break;
        } 
     }
     if(isprime == 0){
        cout << "Not a prime number" << endl;
     } else {
        cout << "is a prime number" << endl;
     }


    // que10
    for(int i=0; i<=5; i++){
        cout << i << " ";
        i++;
    }

    // que11
    for(int i = 0; i <= 15; i += 2) {
        cout << i << " ";

        if(i&1) {
            continue;
        }

        i++;
    }


    // que12
    for(int i = 0; i < 5; i++){
        for(int j = i; j <= 5; j++){
            cout << i << " " << j << endl;
        }
    }


    // que13
    for(int i=0; i<5; i++){
        for(int j=i; j<=5; j++){
            if(i+j == 10) {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}