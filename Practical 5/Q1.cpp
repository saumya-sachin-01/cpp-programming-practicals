#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    float bookPrice;

public:
    Book(int bookID, string bookName, float bookPrice)
    {
        this->bookID = bookID;
        this->bookName = bookName;
        this->bookPrice = bookPrice;
    }

    float getPrice()
    {
        return bookPrice;
    }

    string getName()
    {
        return bookName;
    }
    void displayDetails()
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Book Price: " << bookPrice << endl;
        cout << string(50, '*') << endl;
    }
};
void comparebookprice(Book book1, Book book2)
{
    if (book1.getPrice() > book2.getPrice())
    {
        cout << "Costlier Book Name:" << book1.getName() << endl;
        cout << "Costlier Book Price:" << book1.getPrice() << endl;
    }
    else if (book1.getPrice() == book2.getPrice())
    {
        cout << "Both books have same price" << endl;
    }
    else
    {
        cout << "Costlier Book Name:" << book2.getName() << endl;
        cout << "Costlier Book Price:" << book2.getPrice() << endl;
    }
};

int main()
{
    Book book1(123, "Love of Life", 300);

    book1.displayDetails();

    Book book2(234, "Two States", 500);

    book2.displayDetails();

    comparebookprice(book1, book2);
    return 0;
}
