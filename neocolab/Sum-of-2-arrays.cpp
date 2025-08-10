#include <iostream>
using namespace std;

class data{
    public:
    float a[2][2],b[2][2],c[2][2];
    void take();
    void process();
};
void data :: take(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<4; j++){
            cin>>a[i][j];
            cin>>b[i][j];
        }
    }
}
void data :: process(){

    for(int i = 0; i < 2; i++){
        for(int j = 0; j<2; j++){
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    data d1;
    d1.take();
    d1.process();
}
