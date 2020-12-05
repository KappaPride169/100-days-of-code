#include <string>
#include <iostream>
#include "TextBook.cpp"
using namespace std;
int main(){
    
    Book book1;
    TextBook textBook1;

    book1.setAuthor("Homer");
    book1.setPages(704);
    book1.setStockNumber("5360");
    book1.setTitle("The Iliad");
    book1.setPrice(15.00);

    textBook1.setAuthor("Joyce Farrell");
    textBook1.setGradeLevel("College");
    textBook1.setStockNumber("2070");
    textBook1.setPages(656);
    textBook1.setPrice(60.00);
    textBook1.setTitle("Programming Logic & Design");

    book1.displayBookInfo(book1.getStockNumber(), book1.getAuthor(),book1.getTitle(),book1.getPrice(),book1.getPages());
    textBook1.displayBookInfo(textBook1.getStockNumber(),textBook1.getAuthor(),textBook1.getTitle(),textBook1.getGradeLevel(),textBook1.getPrice(),textBook1.getPages());

    return 0;
}