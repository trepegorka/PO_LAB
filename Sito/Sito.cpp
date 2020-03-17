#include "Sito.h"
#include <iostream>
using namespace std;

Sito::Sito(int size) {
  this->size = size;
}

void Sito::Sift() {

}

void Sito::Display() {

}

void Sito::Check(int x) {

}

void Sito::DoActions() {
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

