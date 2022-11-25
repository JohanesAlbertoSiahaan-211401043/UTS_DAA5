#include <iostream>
#include <queue>

using namespace std;

struct Book{
    string title;
    int year;
};

void show_books(queue<Book> book){
    cout << "=================================" << endl;
    while (!book.empty()){
        cout << "Title : " << book.front().title << endl;
        cout << "Year  : " << book.front().year << endl;
        book.pop();
        cout << "---------------------------------" << endl;
    }
}

int main(){
    int total;
    system("cls");

    Book book;
    queue<Book> books;

    cout << "=================================" << endl;
    cout << "       Your Own Library" << endl;
    cout << "=================================" << endl;

    cout << "How many your books : ";
    cin >> total;
    cout << "---------------------------------" << endl;

    if (total <= 3){
        for (int i = 0; i < total; i++){
            cout << "Book " << i + 1<< endl;
            cout << "Title : ";
            cin >> book.title;
            cout << "Year  : ";
            cin >> book.year;
            books.push(book);
        }

        system("cls");
        cout << "=================================" << endl;
        cout << "           Your Books" << endl;
        show_books(books);

        cout << "How many new books you want to add : ";
        cin >> total;

        if (total <= 3) {
            for (int i = 0; i < total; i++){
                cout << "Book " << i << endl;
                cout << "Title : ";
                cin >> book.title;
                cout << "Year  : ";
                cin >> book.year;

                if (books.size() >= 3){
                    books.pop();
                    books.push(book);
                } else {
                    books.push(book);
                }
            }
        }

        cout << "=================================" << endl;
        cout << "           New Books" << endl;
        show_books(books);

    } else {
        cout << "Buku Anda terlalu banyak" << endl;
    }
}