#include "Sito.h"
#include <iostream>
using namespace std;

Sito::Sito(int size) {
    try{
        if(size<2){
            throw "Size must be >1";
        }
        this->size=size;
    }
    catch(const char* str) {
        cerr<<"Error. "<<str;
        exit(0);
    }

}

void Sito::fillDenominator() {
    denominator[0]=2;
    denominator[1]=3;
    denominator[2]=5;
    denominator[3]=7;
}

void Sito::Sift() {
    for(int i=2; i<size+1; i++){
        allDigits.push_back(i);
    }
    for(int i=0; i<allDigits.size(); i++){

    }
}

void Sito::Display() {

}

void Sito::Check(int x) {

}

void Sito::DoActions() {
    fillDenominator();
    Sift();
    Display();
    Check(7);
}

int Sito::getSize() const {
    return size;
}

void Sito::setSize(int size) {
    while(sizeIsTrue) {
        if (size > 0) {
            this->size = size;
            sizeIsTrue = true;
        } else {
            cout << "Select another size: ";
            cin >> size;
        }
    }
}

