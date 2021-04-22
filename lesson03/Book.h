#ifndef BOOK_H_
#define BOOK_H_

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string publisher;
    int year;
    int price;
    std::string field;
    int number;
    bool lending;
    std::string borrowUser;

public:
    Book(std::string ti, std::string au, std::string pub, int ye, int pr, std::string fi, int num, bool lend, std::string bu);

    std::string getTitle(){
        return title;
    }
    void setTitle(std::string ti){
        title = ti;
    }

    std::string getAuthor(){
        return author;
    }
    void setAuthor(std::string au){
        author = au;
    }

    std::string getPublisher(){
        return publisher;
    }
    void setPublisher(std::string pub){
        publisher = pub;
    }

    int getYear(){
        return year;
    }
    void setYear(int ye){
        year = ye;
    }

    int getPrice(){
        return price;
    }
    void setPrice(int pr){
        price = pr;
    }

    std::string getField(){
        return field;
    }
    void setField(std::string fi){
        field = fi;
    }

    int getNumber(){
        return number;
    }
    void setNumber(int num){
        number = num;
    }

    bool isLending(){
        return lending;
    }
    void setLending(bool lend){
        lending = lend;
    }

    std::string getBorrowUser(){
        return borrowUser;
    }
    void setBorrowUser(std::string bu){
        borrowUser = bu;
    }


    void changeBorrower(std::string name);

    void changeState();

    void print();
};


#endif //BOOK_H_
