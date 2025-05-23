
#include "book.h"

#include <iostream>

using namespace std;

clBook::clBook()
{
    std::cout << "Book instance created" << std::endl;

}

QString clBook::getGenre()
{
    return meGenre;
}

void clBook::setGenre(QString paGenre)
{
    meGenre = paGenre;
}

void clBook::displayInfo()
{
    cout << "*************************************************************" << endl;
    cout << "Book Details" << endl << endl;

    cout << "ID: " << (QString::number(getId())).toStdString() << endl;
    cout << "Title: " << getTitle().toStdString() << endl;
    cout << "Author " << getAuthor().toStdString() << endl;
    cout << "Genre " << getGenre().toStdString() << endl;
    cout << "IsBorrowed: " << QString::number(getBorrowedStatus()).toStdString() << endl;
 }

