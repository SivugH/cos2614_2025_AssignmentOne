#include "libraryitem.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

clLibraryItem::clLibraryItem()
{
    std::cout << "LibraryItem instance created" << std::endl;

    //todo
    //update meID to have the total string count in library
}

void clLibraryItem::getTitle()
{

}

void clLibraryItem::setTitle(QString paTitle)
{
    meTitle = paTitle;
}

void clLibraryItem::getAuthor()
{

}

void clLibraryItem::setAutor(QString paName)
{
    meAuthor = paName;
}

void clLibraryItem::getId()
{

}

void clLibraryItem::setId(unsigned int paId)
{
    meId = paId;
}

void clLibraryItem::getBorrowedStatus()
{

}

void clLibraryItem::setBorrowedStatus(bool paStatus)
{
    meIsBorrowed = paStatus;
}

void clLibraryItem::setmeItemFound(bool paStatus)
{
    meItemFound = paStatus;
}

void clLibraryItem::findItem(QString paTitle)
{

    string searchString, line;
    searchString = paTitle.toStdString();

    ifstream file("libraryList.txt");

    if (file.is_open())
    {
        bool lofound = false;
        while (getline(file, line))
        {
            if (line.find(searchString))
            {
                cout << "Results: " << line << endl;
                lofound = true;
                meResultString = QString::fromStdString(line);
            }
        }
        if (!lofound) {
            cout << "String not found in the file." << endl;
        }
        setmeItemFound(lofound);
        file.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }

}

void clLibraryItem::addItem(QString paTitle, QString paName)
{
    unsigned int loSelection;
    cout << " Adding a Book or Magazine" << std::endl;
    cout << "1 - Book" << endl;
    cout << "2 - Magazine" << endl;
    cin >> loSelection;

    string loTitle;
    cout << "Title" << std::endl;
    cin >> loTitle;




    if (loSelection == 1)
    {

    }
    else if (loSelection == 2)
    {

    }




}

void clLibraryItem::updateItem()
{

}

