#ifndef LIBRARYADMIN_H
#define LIBRARYADMIN_H

#include <QString>

class clLibraryAdmin
{
private:
    QString meLocation;//save the location of the found title
    bool meItemFound; //save status of the found item
    QString meResultString; //save the found title


public:
    clLibraryAdmin();

    void setmeLocation();
    void getmeLocation();

    void setmeItemFound(bool paStatus);
    void getmeItemFound();

    void findItem(QString paTitle);
    void addItem();
    void updateItem();

};

#endif // LIBRARYADMIN_H
