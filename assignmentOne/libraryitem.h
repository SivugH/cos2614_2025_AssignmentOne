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

    QString getTitle();
    void setTitle(QString paTitle);

    QString getAuthor();
    void setAutor(QString paName);

    int getId();
    void setId(int paId);

    int getBorrowedStatus();
    void setBorrowedStatus(int paStatus);

    void setmeItemFound(bool paStatus);
    void getmeItemFound();

    void findItem(QString paTitle);
    void addItem(QString paNewItem);
    void updateItem();

    QString getResultString();
    void setResultString(QString paResult);

    virtual void displayInfo() = 0;
};

#endif // LIBRARYITEM_H
