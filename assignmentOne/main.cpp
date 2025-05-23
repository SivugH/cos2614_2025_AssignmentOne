#include <QCoreApplication>
#include <iostream>
#include <sstream>

#include "magazine.h"
#include "book.h"
#include "libraryitem.h"

using namespace std;

void BookDetails(string &paTitle, string &paAuthor, string &paGenre)
{
    cout << "*************************************************************" << endl;
    cout << "Enter Book Details:" << endl << endl;
    cout << "Title:";
    cin >> paTitle;
    cout << endl;
    cout << "Author:" << endl;
    cin >> paAuthor;
    cout << endl;
    cout << "Genre:" << endl;
    cin >> paGenre;
    cout << endl;
}

void MagazineDetails(string &paTitle, string &paAuthor, int &paIssuedNumber)
{
    cout << "*************************************************************" << endl;
    cout << "Enter Magazine Details:" << endl << endl;
    cout << "Title:";
    cin >> paTitle;
    cout << endl;
    cout << "Author:" << endl;
    cin >> paAuthor;
    cout << endl;
    cout << "Issue Number:" << endl;
    cin >> paIssuedNumber;
    cout << endl;
}

void ItemSelection()
{
    string loTitle, loAuthor, loGenre;
    int loIssuedNumber, loUserChoice;
    cout << "*************************************************************" << endl;

    cout << "Enter the following:" << endl;

    cout << "1 - Book" << endl;
    cout << "2 - Magazine" << endl;
    cout << "Option: ";

    cin >> loUserChoice;

    if (loUserChoice == 1) //Book
    {
        clBook loBook;
        BookDetails(loTitle, loAuthor, loGenre);


        loBook.setTitle(QString::fromStdString(loTitle));
        loBook.setAutor(QString::fromStdString(loAuthor));
        loBook.setGenre(QString::fromStdString(loGenre));



    }
    else if (loUserChoice == 2)//Magazine
    {
        clMagazine loMagazine;
        MagazineDetails(loTitle, loAuthor, loIssuedNumber);


        loMagazine.setTitle(QString::fromStdString(loTitle));
        loMagazine.setAutor(QString::fromStdString(loAuthor));
        loMagazine.setMagazineIssueNumber(loIssuedNumber);
    }
    else
    {
        cout << "Apologies we are unable to help you !" << endl;

    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int loUserChoice;

    cout << "*************************************************************" << endl;
    cout << "Welcome to Sivu's Library" << endl << endl;

    int loFunctionSelection;
    cout << "Select the following: " << endl << endl;
    cout << "1 - Search" << endl;
    cout << "2 - Return an Item" << endl;
    cout << "3 - Borrow an Item" << endl;
    cout << "4 - Add an Item" << endl << endl;

    cin >> loFunctionSelection;

    switch (loFunctionSelection)
    {
    case 1: //Search
    {
        ItemSelection();

    }
    case 2://Return
    {
        ItemSelection();
    }
    case 3: //Borrow
    {
        ItemSelection();

        //check for availability before borrowing
        //           loAdmin.updateItem();
    }
    case 4: //Add
    {
        ItemSelection();

        //Check item does not exist before duplicating
        //Add item
    }
    default: //neither of above
    {
        cout << "Your have entered an incorrect input" << endl;
    }

        return a.exec();
    }
}
