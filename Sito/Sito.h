#ifndef PROJECTS_SITO_H
#define PROJECTS_SITO_H

#include <vector>

class Sito {
private:
    int size;
    bool sizeIsTrue = false;
    std::vector<int> allDigits;
    std::vector<int> sortedDigits;
    int denominator[4];
public:
    int getSize() const;
    void setSize(int size);

    explicit Sito(int size);
    void fillDenominator();
    void Sift();   // Odsiej
    void DisplaySifted();
    void Check(int x);
    void DoActions();

//    static void Sift();   // Odsiej
//    static void DisplaySifted();
//    static void Check(int x);
//    static void DoActions();
};


#endif //PROJECTS_SITO_H
