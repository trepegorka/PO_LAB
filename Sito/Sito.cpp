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
        int coincidences = 0;
        for(int d=0;d<4; d++){
            if(allDigits[i]%denominator[d]==0){
                continue;
            } else{
                coincidences++;
            }
        }
        if(coincidences==4){
            sortedDigits.push_back(allDigits[i]);
        }
    }
}

void Sito::DisplaySifted() {
    if(size>7) {
        for (int denominators: denominator) {
            cout << denominators << " ";
        }
        for (int sortedDigit: sortedDigits) {
            cout << sortedDigit << " ";
        }
    }else{
        switch(size){
            case 2:
                cout<<denominator[0]<<" ";
                break;
            case 3:
                for(int i=0;i<2;i++){
                    cout<<denominator[i]<<" ";
                }
                break;
            case 4:
                for(int i=0;i<2;i++){
                    cout<<denominator[i]<<" ";
                }
                break;
            case 5:
                for(int i=0;i<3;i++){
                    cout<<denominator[i]<<" ";
                }
                break;
            case 6:
                for(int i=0;i<3;i++){
                    cout<<denominator[i]<<" ";
                }
                break;
            case 7:
                for(int i=0;i<4;i++){
                    cout<<denominator[i]<<" ";
                }
                break;
        }
    }
}

void Sito::Check(int x) {
// ????????
}

void Sito::DoActions() {
    fillDenominator();
    Sift();
    DisplaySifted();
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

