//Leetcode Problem 13 - Roman to Integer

#include <iostream>
#include <string>
using namespace std;

int value(char c){
    switch(c){
    case 'I' : return 1;
    case 'V' : return 5;
    case 'X' : return 10;
    case 'L' : return 50;
    case 'C' : return 100;
    case 'D' : return 500;
    case 'M' : return 1000;
    default : return 0;
    }
}

int romanToInteger(string s){
    int x = 0;
    int n = s.length();
    
    for(int i = 0; i<n; i++){
        int curr = value(s[i]);
        int next = (i + 1 < n) ? value(s[i + 1]) : 0;
        if(curr < next){
            x -= curr;
        }else{
            x += curr;
        }
        
    }
    return x;
}

int main(){
    string s;
    cin>>s;
    int a = romanToInteger(s);
    cout<<a;
}





