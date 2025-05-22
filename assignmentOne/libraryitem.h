#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <QString>

class clLibraryItem
{

private:
    QString meTitle;
    QString meAuthor;
    int meId;
    bool meIsBorrowed;


public:
    clLibraryItem();

    void getTitle();
    void setTitle(QString paTitle);

    void getAuthor();
    void setAutor(QString paName);

    void getId();
    void setId(unsigned int paId);

    void getBorrowedStatus();
    void setBorrowedStatus(bool paStatus);

    virtual void displayInfo() = 0;
};

#endif // LIBRARYITEM_H
