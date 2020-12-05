#include <string>
#include <iostream>
using namespace std;
class Book
{
    private:
        string stockNumber;
        string author;
        string title;
        double price;
        int pages;
    public:
        void setStockNumber(string);
        void setAuthor(string);
        void setTitle(string);
        void setPrice(double);
        void setPages(int);
        string getStockNumber();
        string getAuthor();
        string getTitle();
        double getPrice();
        int getPages();
        void displayBookInfo(string,string,string,double,int);        
};

void Book::setStockNumber(string stockId){
    stockNumber=stockId;
}
void Book::setAuthor(string authorId){
    author=authorId;
}
void Book::setTitle(string titleId){
    title = titleId;
}
void Book::setPrice(double bookPrice){
    price = bookPrice;
}
void Book::setPages(int bookPages){
    pages = bookPages;
}
string Book::getStockNumber(){
    return stockNumber;
}
string Book::getAuthor(){
    return author;
}
string Book::getTitle(){
    return title;
}
double Book::getPrice(){
    return price;
}
int Book::getPages(){
    return pages;
}
void Book::displayBookInfo(string stockNumber,string author, string title, double price, int pages){
    cout<<"The book "<<title<<". Author is "<<author<<". Its stock number is "<<stockNumber<<". It has "<<pages<<" pages and is $"<<price<<" dollars."<<endl;
}

