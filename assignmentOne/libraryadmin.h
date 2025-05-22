#ifndef LIBRARYADMIN_H
#define LIBRARYADMIN_H

#include <QString>

class clLibraryAdmin
{
private:
    QString meLocation;


public:
    clLibraryAdmin();

    void findItem();
    void addItem();
    void updateItem();

};

#endif // LIBRARYADMIN_H
