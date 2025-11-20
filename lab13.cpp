#include <vector>
#include <iostream>
using namespace std;

bool fail_lecture (const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i = 1 ; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i] == 0;
    }
    return absent_count >= 3 ;
}

int main(){
    vector<int> Sam = {1,1,1,1,1,1,1,1,1,1}; //question 3 test case 
    cout << fail_lecture(Sam) << endl;
    vector<int> Tyler = {0,0,0,0,1,1,1,1,1,1}; //question 4 test case 
    cout << fail_lecture(Tyler) << endl;
    vector<int> Peter = {0,0,0,1,1,1,1,1,1,1}; //question 5 test case
    cout << fail_lecture(Peter) << endl;
}