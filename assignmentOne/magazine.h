#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <libraryitem.h>


class clMagazine : public clLibraryItem
{
private:
    int meIssueNumber;

public:
    clMagazine();

    void getMagazine();
    void setMagazine();

    void displayInfo();


};

#endif // MAGAZINE_H


