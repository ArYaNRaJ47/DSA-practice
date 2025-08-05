// leetcode problem 12 - Integer to Roman


#include <iostream>
#include <vector>
#include <string>

using namespace std;

string integerToRoman(int n){
    vector<pair<int,string>> pair = {
        {1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
    };
    
    string result = "";
    
    for(auto &[value, symbol] : pair){
        while(n >= value){
            result += symbol;
            n -= value;
        }
    }
    return result;
    
} 

int main(){
    int n;
    cin>>n;
    
    string roman = integerToRoman(n);
    cout<<roman;
}

