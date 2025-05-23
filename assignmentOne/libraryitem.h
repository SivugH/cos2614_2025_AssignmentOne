#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <QString>

class clLibraryItem
{

private:
    QString meTitle;
    QString meAuthor;
    int meId; //save the location of the found title
    bool meIsBorrowed;
    bool meItemFound; //save status of the found item
    QString meResultString; //save the found title


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

    void setmeItemFound(bool paStatus);
    void getmeItemFound();

    void findItem(QString paTitle);
    void addItem(QString paTitle, QString paName);
    void updateItem();

    virtual void displayInfo() = 0;
};

#endif // LIBRARYITEM_H
