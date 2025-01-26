// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

//     int x = 10;
//     int* ptr = &x;

//     cout << ptr << endl;
//     cout << &x << endl;

//     *ptr = 20;
//     cout << x << endl;

//     float balance = *ptr;
//     balance = balance +0.1; 
//     cout << balance << endl;
 

// return 0;

// }


#include <iostream>
#include <vector>

using namespace std;

int main() {

double harrys_balance = 0;
double joints_balance = 2000;
double Ahmeds_balance = 0;
double *account_pointer = &harrys_balance;

*account_pointer = 1400; // initializes harrys_balance to 1400

*account_pointer = *account_pointer - 100; //withdraw 100


cout << "Balance " << *account_pointer<<endl;

//Change pointer value
account_pointer =&joints_balance;

*account_pointer = *account_pointer - 100; //withdraw 100

cout << "Joint's Balance:  " << *account_pointer<<endl;

return 0;
}
