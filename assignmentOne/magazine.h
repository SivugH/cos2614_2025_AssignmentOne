#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <libraryitem.h>


class clMagazine : public clLibraryItem
{
private:
    int meIssueNumber;

public:
    clMagazine();

    int getIssuedNumber();
    void setMagazineIssueNumber(int paNumber);

    void displayInfo();


};

#endif // MAGAZINE_H


