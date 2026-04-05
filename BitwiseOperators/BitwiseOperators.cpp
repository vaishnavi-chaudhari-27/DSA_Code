#include <iostream>
using namespace std;

int main() {
    // Bitwise and &
    // int a = 4, b = 8;
    // cout << (a & b) << endl;
    // return 0;

    // int a = 6, b = 10;
    // cout <<(a & b) << endl;
    // return  0;

       //  que 1 Even / Odd Check //
   
    //    int n;
    //    cin >> n;
    //    if((n & 1) == 0){
    //       cout << "Even" << endl;
    //     } else {
    //       cout << "Odd" << endl;
    //     }
    //       return 0;
    //     }
    
        //  que 2 Power of 2
        int n;
        cin >> n;
        if((n & (n-1) ) == 0 & n > 0) {
           cout << "power of 2" << endl;
        } else {
          cout << "not power of 2" << endl;
        }
        return 0;
    }

    //    que 3 Swap 
//      int  a = 3, b = 7;
//      int temp = a;
//      a = b;
//      b = temp;

//      cout << a << " " << b;
//      return 0;

//   }
    

    // Bitwise OR |
    // int a = 4, b = 8;
    // cout << (a | b) << endl;
    // return 0;

    // int a = 6, b = 10;
    // cout << (a | b) << endl;
    // return 0;

    // Bitwise XOR OPERATOR ^
    // int a = 4, b = 8;
    // cout << (a ^ b) << endl;
    // return 0;

    // int a = 6, b = 10;
    // cout << (a ^ b) << endl;
    // return 0;

    // Bitwise Left Shift Operator <<
    // cout << (4 << 1) << endl;
    // return 0;

    // cout << (10 << 2) << endl;
    // return 0;

    // Bitwise Right Shift Operator >>
    
    // cout << (10 >> 1) << endl;
    // return 0;

    // cout << (10 >> 1) << endl;
    // return 0;

   

