
#include "magazine.h"

#include <iostream>

using namespace std;

clMagazine::clMagazine()
{
    std::cout << "Magazine instance created" << std::endl;
}

int clMagazine::getIssuedNumber()
{
    return meIssueNumber;
}

void clMagazine::setMagazineIssueNumber(int paNumber)
{
    meIssueNumber = paNumber;
}

void clMagazine::displayInfo()
{
    cout << "*************************************************************" << endl;
    cout << "Magazine Details" << endl << endl;

    cout << "ID: " << (QString::number(getId())).toStdString() << endl;
    cout << "Title: " << getTitle().toStdString() << endl;
    cout << "Author " << getAuthor().toStdString() << endl;
    cout << "Issued Number: " << QString::number(getIssuedNumber()).toStdString() << endl;
    cout << "IsBorrowed: " << getBorrowedStatus() << endl;
}

