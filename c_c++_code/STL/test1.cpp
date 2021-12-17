#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    string str;
    cin >> str;
    str+=',';
    int num = 0;
    int minusFalg = 0;
    //23 = 2*10 + 3, 435 = 4*100 + 3*10 + 5
    if(str[0] == '-'){
        minusFalg = 1;
    }
    for(int i = 0;i<str.length();i++){
        if(str[i] == ','){
            if(minusFalg == 1){
                cout<<"-";
            }
            if(str[i+1] == '-'){
                minusFalg = 1;
            }else{
                minusFalg = 0;
            }
            cout<<num<<"\n";
            num = 0;
        }else{
            if(str[i] >= 48 && str[i] <= 57){
             num = num*10+(str[i] - 48);   
            }
        }
    }
    return 0;
}