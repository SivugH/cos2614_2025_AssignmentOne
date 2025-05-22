#ifndef BOOK_H
#define BOOK_H
#include <libraryitem.h>

#include <QString>

class clBook : public clLibraryItem
{
    QString meGenre;

public:
    clBook();

    void getGenre();
    void setGenre();

    void displayInfo();

};

#endif // BOOK_H
