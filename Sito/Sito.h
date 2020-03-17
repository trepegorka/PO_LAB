#ifndef PROJECTS_SITO_H
#define PROJECTS_SITO_H

#include <vector>

class Sito {
private:
    int size;
    bool sizeIsTrue = false;
    std::vector<int> arr;
public:
    int getSize() const;
    void setSize(int size);

    explicit Sito(int size);
    void Sift();   // Odsiej
    void Display();
    void Check(int x);
    void DoActions();

//    static void Sift();   // Odsiej
//    static void Display();
//    static void Check(int x);
//    static void DoActions();
};


#endif //PROJECTS_SITO_H
