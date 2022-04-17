#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> wholeNumber;
    wholeNumber.push_back(1);
    wholeNumber.push_back(25);
    wholeNumber.push_back(-45);
    wholeNumber.push_back(100);
    wholeNumber.push_back(1);
    wholeNumber.push_back(25);
    wholeNumber.push_back(-45);

    cout<<wholeNumber[0]<<endl;
    cout<<wholeNumber[1]<<endl;
    cout<<wholeNumber[2]<<endl;
    cout<<wholeNumber[3]<<endl;
    cout<<wholeNumber[4]<<endl;
 cout<<"size: "<<wholeNumber.size()<<endl;
 cout<<"capacity: "<<wholeNumber.capacity()<<endl;
}