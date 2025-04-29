#include <iostream>
using namespace std;
class Book
{
private:
    int bookID;
    string title;
    int pages;
    static int totalBooks;
    static int pageCapacity;

public:
    Book(int bid, string t, int p)
    {
        bookID = bid;
        title = t;
        pages = p;
        totalBooks++;
        pageCapacity -= pages;
    }
    static int getTotalBooks()
    {
        return totalBooks;
    }
    static int getPageCapacity()
    {
        return pageCapacity;
    }
};
int Book::totalBooks = 0;
int Book::pageCapacity = 10000;
int main()
{
    do
    {
        int bookID, pages;
        string title;
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Number of Pages: ";
        cin >> pages;

        if (pages > Book::getPageCapacity())
        {
            cout << "Not enough page capacity left!" << endl;
            cout << "Total Books: " << Book::getTotalBooks() << endl;
            cout << "Page Capacity Left: " << Book::getPageCapacity() << endl;
            cout << "Exiting..." << endl;
            break;
        }
        Book b(bookID, title, pages);
        cout << "Total Books: " << Book::getTotalBooks() << endl;
        cout << "Page Capacity Left: " << Book::getPageCapacity() << endl;

    } while (Book::getPageCapacity() > 0);
}