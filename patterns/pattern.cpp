#include<iostream>
using namespace std;

int main(){
    // *square patrn*
 
    // int n=4;
    // for(int i=1; i<=n; i++){
    //    for(int j=1; j<=n; j++){
    //        cout << j;
    //    }
    //    cout << endl;
    // }
    // return 0;


    // int n=4;
    // for(int i=1; i<=n; i++){
    //    for(int j=1; j<=n; j++){
    //        cout << "*";
    //    }
    //    cout << endl;
    // }
    // return 0;


    // int n=5;
    // for(int i=0; i<n; i++){
    //    for(int j=0; j<n; j++){
    //        cout << j;
    //    }
    //    cout << endl;
    // }
    // return 0;


    //  int n = 4;
    // for(int i=0; i<n; i++){
    //     char ch = 'A';
    //    for(int j=0; j<n; j++){
    //        cout << ch;
    //        ch = ch + 1;
    //    }
    //    cout << endl;
    // }
    // return 0;

    //   int n = 3;
    //   char ch = 'A';
    //   for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //       cout << ch << " ";
    //       ch++;
    //     }
    //     cout << endl;
    //   }
    //   return 0;


    // int n = 3;
    // int num = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // cout << "after pattern : " << num << endl;
    // return  0;


    // *Triangle patrn*

    // int n = 8;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;



    // int n = 4;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //       cout << (i+1);
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 5;
    // char ch ='A';

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << char(i+ch) << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for(int j=1; j<=i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j>=0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n = 4;
    // char ch = 'A';
    // for(int i=0; i<n; i++){
    //     for (int j=i; j>=0; j--){
    //         cout << char(ch+j);
    //     }
    //     cout << endl;
    // }
    // return 0;

    // *floyd's triangle*

    // int n = 4;
    // int num = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << num << " ";
    //         num++; 
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n = 4; 
    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i + 1; j++){
    //         cout <<  ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // return 0;


    // *inverted triangle*


    // int n = 4;
    // int num=1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout << (i+1);
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n = 4;
    // char ch ='A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout << " ";
    //     }
    // for(int j=0; j<n-i; j++){
    //     cout << char('A' + j);
    // }    
    // cout << endl;
    // }
    // return 0;


    // *pyramid pattrn*

    // int n=4;
    // for(int i=0; i<n; i++){
    //     // spaces : n-i-1
    //     for(int j = 0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     // nums1 : i+1
    //     for(int j=1; j<=i+1; j++){
    //         cout << j;
    //     }
    //     // nums2
    //     for(int j=i; j>0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;


//     int n = 4;
//     for(int i=0; i<n; i++){
//         // top part 
//         // spaces
//     for(int j=0; j<n-1-i; j++){
//         cout << " ";
//     }
//     cout << "*";

//     if(i != 0) {
//         for(int j=0; j<2*i-1; j++){
//             cout << " ";
//         }
//         cout << "*";
//     }
//     cout << endl;
//     }

//   //bottom part
  
//   for(int i=0; i<n-1; i++){
//     // spaces
//     for(int j=0; j<i+1; j++){
//         cout << " ";
//     }
//     cout << "*";

//      if(i != n-2) {
//         for(int j=0; j<2*(n-i)-5; j++){
//             cout << " ";
//         }
//         cout << "*";
//     }
//     cout << endl;
//     }
//     return 0;


// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//   int col = 1;
//   while(col<=row){
//     cout<<"*";
//     col = col + 1;
//   }
//   cout<<endl;
//   row = row + 1;
// }


// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//   int col = 1;
//   while(col<=row){
//     cout << row;
//     col = col+1;
//   }
//   cout << endl;
//   row =row+1;
// }


// int n;
// cin>>n;
// int i = 1;
// while(i<=n){
//   int j = 1;
//   while(j<=i){
//     cout << (i-j+1);
//     j=j+1;
//   }
//   cout<<endl;
//   i=i+1;
// }

}



// practice question 

// question1 
  // int n = 4;
// for(int i=1; i<=n; i++){
//   for(int j=1; j<i+1; j++){
//      cout << "*";
//   }
//  cout << endl;
// }
// return 0;

//  question2

// int n = 4;
// for(int i=1; i<=n; i++){
//   for(int j=1; j<=i+1; j++){
//     cout << j;
//   }
//   cout << endl;
// }
// return 0;
  
