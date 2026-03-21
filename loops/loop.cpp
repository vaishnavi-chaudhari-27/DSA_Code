#include<iostream>
using namespace std;

int main(){
    // que1
    int n = 0;
    bool isprime = true;
    for (int i=2; i<=n-1; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }
     if(isprime == true){
        cout << "prime num";
     } else {
        cout << "non prime";
     }
     return 0;
    }


    // que2
    int n= 40;
    int evensum =0;
     //print odd num //
     for(int i=1; i<=n; i++){
        if(i%2 != 0){
            evensum += i;
        }
     }
     cout << "even sum = " << evensum << endl;
     return 0 ;


    //  que3
    int n = 5;
    for(int i=1; i<=n; i++){
        cout << i;
    }


    // que4
    int n = 50;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
        cout << "sum = " << sum <<endl;
        return 0;
    

    // que5
    int n = 90;
    int count = 1;
    while(count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;

