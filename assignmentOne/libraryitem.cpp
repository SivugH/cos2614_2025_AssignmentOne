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

QString clLibraryItem::getTitle()
{
    return meTitle;
}

void clLibraryItem::setTitle(QString paTitle)
{
    meTitle = paTitle;
}

QString clLibraryItem::getAuthor()
{
    return meAuthor;
}

void clLibraryItem::setAutor(QString paName)
{
    meAuthor = paName;
}

int clLibraryItem::getId()
{
    return  meId;
}

void clLibraryItem::setId(int paId)
{
    meId = paId;
}

int clLibraryItem::getBorrowedStatus()
{
    return meIsBorrowed;
}

void clLibraryItem::setBorrowedStatus(int paStatus)
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

void clLibraryItem::addItem(QString paNewItem)
{
    cout << "Test" << endl;

//    ifstream file("libraryList.txt");

    ofstream loLibraryFile("libraryList.txt", std::ios::app);
    if (loLibraryFile.is_open())
    {
        loLibraryFile << paNewItem.toStdString() << std::endl;
        loLibraryFile.close();
    } else
    {
        std::cerr << "Error opening the file." << std::endl;
    }
}

void clLibraryItem::updateItem()
{

}

QString clLibraryItem::getResultString()
{
    return meResultString;
}

void clLibraryItem::setResultString(QString paResult)
{
    meResultString = paResult;
}

