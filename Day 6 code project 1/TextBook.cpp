#include <string>
#include <iostream>
#include "Book.cpp"
using namespace std;

class TextBook : public Book
{
    private:
        string gradeLevel;
    public:
        void setGradeLevel(string);
        string getGradeLevel();
        void displayBookInfo(string,string,string,string,double,int);
};
void TextBook::setGradeLevel(string level){
    gradeLevel = level;
}
string TextBook::getGradeLevel(){
    return gradeLevel;
}
void TextBook::displayBookInfo(string stockNumber, string author, string title, string gradeLevel, double price, int pages){
    cout<<"The book "<<title<<". Author is "<<author<<". Its recommended for "<<gradeLevel<<" grade level. Its stock number is "<<stockNumber<<". It has "<<pages<<" pages and is $"<<price<<" dollars."<<endl;
}