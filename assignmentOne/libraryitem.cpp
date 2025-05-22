
#include "libraryitem.h"

#include <iostream>

clLibraryItem::clLibraryItem()
{
    std::cout << "LibraryItem instance created" << std::endl;
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

