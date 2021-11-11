//
// Created by 李啸 on 11/8/21.
//
#include "iostream"

using namespace std;

int main(){
    string bad,should;
    getline(cin,bad);
    getline(cin,should);
    for (int i = 0,length=should.length(); i <length ; ++i) {
        if (bad.find(toupper(should[i]))!=string::npos)continue;

    }
}