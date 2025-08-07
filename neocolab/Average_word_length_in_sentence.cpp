//Average Word Length in a sentence problem.
#include <iostream>
#include <string>
using namespace std;

double calculateAverageWordLength(string str){
    int size = str.length();
    int words = 0,characters = 0;
    for(int i = 0; i< size; i++){
        if(str[i] != ' '){
            characters++;
        }
        if(str[i] != ' ' && (i == 0 || str[i-1] == ' ')){
            words++;
        }
    }
    double avg = static_cast<double>(characters) / words;
    return avg;
}

int main(){
    string sentence;
    getline(cin,sentence);
    cout<<calculateAverageWordLength(sentence);
}
