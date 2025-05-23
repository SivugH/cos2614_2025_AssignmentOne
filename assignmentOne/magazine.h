#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <libraryitem.h>


class clMagazine : public clLibraryItem
{
private:
    int meIssueNumber;

public:
    clMagazine();

    void getMagazineIssueNumber();
    void setMagazineIssueNumber(int paNumber);

    void displayInfo();


};

#endif // MAGAZINE_H


