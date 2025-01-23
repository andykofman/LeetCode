/*
a refresh fro the vector operations to be used in Problem 1
*/

// #include <bits/stdtr1c++.h>
// using namespace std;

// int main(){
//     vector<int> v = {1,3,4,5};
//     vector<float> v2 = {1.3,4.5};

//         for (const auto& elem : v) {
//         cout << elem << " ";
//     }
//     cout << endl;

//     vector<double> v3_combined;
//     v3_combined.insert(v3_combined.end(), v.begin(), v.end());
//     v3_combined.insert(v3_combined.end(), v2.begin(), v2.end());

//     for (const auto& elem : v3_combined) {
//         cout << elem << " ";
//     }
//     cout << endl;
     
//     return 0;
// }

#include <bits/stdtr1c++.h>
using namespace std;

int main (){

vector <int> v = {1,2,3};
// cout << v[12] << endl;
// cout << v.at(12) << endl;       // vector.at ---> start from 1
                                //terminate called after throwing an instance of 'std::out_of_range'
                                //what():  vector::_M_range_check: __n (which is 12) >= this->size() (which is 3)

// v.push_back(5);
// v.insert(v.begin()+4, 12 );


// v.erase(find(v.begin(), v.end(), 3));       // deleting from the vector

for (const auto &elm: v){
    cout << elm << " ";

}
return 0;
}