#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
void fun2();
void fun2()
{
     cout<< "======================================================================================================\n";
}

class book
{
private:
    char autherName[20];
    int bookid;
    char booktitle[20];
    float bookprice;

public:
    book()
    {
        strcpy(autherName, "no name");
        bookid = 0;
        strcpy(booktitle, "no title");
        bookprice = 0;
    }
    void getBookData()
    {
        cout << "enter bookid: ";
        cin >> bookid;
        cout << "enter booktitle: ";
        cin.ignore();
        cin.getline(booktitle, 19);
        cout << "enter book price: ";
        cin >> bookprice;
        cout << "enter auther Nane: ";
        cin.ignore();
        cin.getline(autherName, 19);
    }
    void showBookData()
    {

        char q[] = "\t\t\t\t";
        cout << bookid;
        cout << q << booktitle;
        cout << q << autherName;
        cout << q << bookprice << endl;
    }
    int storBookData();
    void viewAllData();
    void searchBook(char *);
    void deleteBook(char *);
    void updateBookData(char *);
};
void book::updateBookData(char *t)
{
    int counter = 0;
    fstream file;
    file.open("bookdata.txt", ios::in | ios::out | ios::ate | ios::binary);
    file.seekg(0);
    file.read((char *)this, sizeof(*this));
    while (!file.eof())
    {
        if (!strcmp(t, booktitle))
        {
            getBookData();
            file.seekp(file.tellp() - sizeof(*this));
            file.write((char *)this, sizeof(*this));
            counter++;
        }
        file.read((char *)this, sizeof(*this));
    }
    if (counter == 0)
        cout << "record not found";
    else
        cout << "update sucessfully...\n\n";
}
void book::deleteBook(char *t)
{
    int count = 0;
    ifstream fin;
    ofstream fout;
    fin.open("bookdata.txt", ios::in | ios::binary);
    if (!fin)
        cout << "\nFile not found";
    else
    {
        fout.open("tempfile.txt", ios::out | ios::binary);
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(t, booktitle))
                count++;
            if (strcmp(t, booktitle))
                fout.write((char *)this, sizeof(*this));
            fin.read((char *)this, sizeof(*this));
        }
        if (count == 0)
            cout << "no record found";
        else
            cout << "deletion complete";
        fin.close();
        fout.close();
        remove("bookdata.txt");
        rename("tempfile.txt", "bookdata.txt");
    }
}
void book::searchBook(char *t)
{
    int counter = 0;
    ifstream fin;
    fin.open("bookdata.txt", ios::in | ios::binary);
    if (!fin)
        cout << "\nFile not found";
    else
    {
        fin.read((char *)this, sizeof(*this));
        char P[] = "\t\t\t";
        cout << "BOOK ID." << P << " BOOK TITLE" << P << "AUTHER NAME " << P << "BOOK PRICE\n";
        while (!fin.eof())
        {
            if (!strcmp(t, booktitle))
            {
                fun2();
                showBookData();
                counter++;
            }
            fin.read((char *)this, sizeof(*this));//https://www.google.com/chrome/?&brand=CHWL&utm_campaign=en&utm_sou-bubble&utm_medium=et
        }
        fun2();
        if (counter == 0)
            cout << "\nRecord not found";
        fin.close();
    }
}
void book::viewAllData()
{
    ifstream fin;
    fin.open("bookdata.txt", ios::in | ios::binary);
    if (!fin)
        cout << "\nFile not found";
   // elsehttps://www.google.com/chrome/?&brand=CHWL&utm_campaign=en&utm_sou-bubble&utm_medium=et
    {
        fin.read((char *)this, sizeof(*this));

        char P[] = "\t\t\t";
        cout << "BOOK ID." << P << " BOOK TITLE" << P << "\tAUTHER NAME " << P << "BOOK PRICE\n";
        while (!fin.eof())
        {
            fun2();
            showBookData();
            fin.read((char *)this //https://www.google.com/chrome/?&brand=CHWL&utm_campaign=en&utm_sou-bubble&utm_medium=et
    }
    fin.close();
}
int book::storBookData()
{
    if (bookid == 0 && bookprice == 0)//https://www.google.com/chrome/?&brand=CHWL&utm_campaign=en&utm_sou-bubble&utm_medium=et
    {
        cout << "\nno initialization\n";
        return (0);
    }
    else
    {
        ofstream fout;
        fout.open("bookdata.txt", ios::app | ios::binary);
        fout.write((char *)this, sizeof(*this));
        fout.close();
        return (1);
    }
}

void getch();
void getch()
{
    string p;
    cout << "\npress any key\n";
    cin >> p;
}
char n[] = "\n\n\t\t\t\t";
void fun();
void fun()
{
    cout << "\t\t\t\t======================================================\n";
}
int main()
{
    int choice;
    char title[20];
    book b1;
    while (1)
    {
        system("clear");
        fun();
        cout << "\t\t\t\t\t***WELL COME TO BOOK STORE***\n";
        fun();
        cout << n << "1.ADD NEW BOOK";
        cout << n << "2.VIEW ALL BOOKS";
        cout << n << "3.SEARCH A BOOK";
        cout << n << "4.DELETE A BOOK";
        cout << n << "5.UPDATE  BOOK RECORD ";
        cout << n << "6.Exit \n";
        cout << "ENTER YOUR CHOICE ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            b1.getBookData();
            b1.storBookData();
            cout << "\n\nAdd book sucessfully...";
            break;
        case 2:

            b1.viewAllData();
            break;
        case 3:
            cout << "\n\nEnter title of book to search";
            cin.ignore();
            cin.getline(title, 19);
            b1.searchBook(title);
            break;
        case 4:
            cout << "\n\nEnter title of book to delete\n\n";
            cin.ignore();
            cin.getline(title, 19);
            b1.deleteBook(title);
            break;
        case 5:
            cout << "\n\nEnter title of book to https://www.google.com/chrome/?&brand=CHWL&utm_campaign=en&utm_sou-bubble&utm_medium=etupdate\n\n";
            cin.ignore();
            cin.getline(title, 19);
            b1.updateBookData(title);
            break;
        case 6:
            cout << "THANKS FOR USING BOOK STORE \n";
            exit(1);
            break;
        default:
            cout << "invalid choice...\n\n\n";
            break;
        }
        // getchar();
        getch();
        // system("pause>0");
    }
    return 0;
}
