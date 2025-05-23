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
    void setGenre(QString paGenre);

    void displayInfo();

};

#endif // BOOK_H
