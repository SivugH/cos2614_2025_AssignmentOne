#include <QCoreApplication>
#include <iostream>
#include <sstream>

#include "magazine.h"
#include "book.h"
#include "libraryitem.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


















    std::cout << "Welcome to Sivu's Library" << std::endl << std::endl;

    std::cout << "Enter the following:" << std::endl << std::endl;

    std::cout << "1 - Book" << std::endl;

    std::cout << "2 - Magazine" << std::endl;

    unsigned int loUserChoice;

    std::cout << "Option: ";

    std::cin >> loUserChoice;

    if (loUserChoice == 1)
    {
        std::cout << "1 - Book" << std::endl;
        clBook loBook;

        std::string loBookTitle;
        QString loBookTitle_qstring;
        std::cout << "Enter Book Title:" << std::endl;
        std::cin >>loBookTitle;
        loBookTitle_qstring = QString::fromStdString(loBookTitle);

        loBook.setTitle(loBookTitle_qstring);


        std::string loBookAuthor;
        QString loBookAuthor_qstring;
        std::cout << "Enter Book Author:" << std::endl;
        std::cin >> loBookAuthor;
        loBookAuthor_qstring = QString::fromStdString(loBookAuthor);

        loBook.setAutor(loBookAuthor_qstring);




    }
    else if (loUserChoice == 2)
    {
        std::cout << "2 - Magazine" << std::endl;
        clMagazine loMagazine;

        std::string loMagazineTitle;
        QString loMagazineTitle_qstring;
        std::cout << "Enter Magazine Title:" << std::endl;
        std::cin >>loMagazineTitle;
        loMagazineTitle_qstring = QString::fromStdString(loMagazineTitle);

        loMagazine.setTitle(loMagazineTitle_qstring);


        std::string loMagazineAuthor;
        QString loMagazineAuthor_qstring;
        std::cout << "Enter Magazine Author:" << std::endl;
        std::cin >> loMagazineAuthor;
        loMagazineAuthor_qstring = QString::fromStdString(loMagazineAuthor);

        loMagazine.setAutor(loMagazineAuthor_qstring);








    }
    else
    {
        std::cout << "Incorrect Selection" << std::endl;






    }

    int loFunctionSelection;
    std::cout << "Select the following for Book/Magazine:" << std::endl << std::endl;
    std::cout << "1 - Search" << std::endl;
    std::cout << "2 - Return" << std::endl;
    std::cout << "3 - Borrow" << std::endl;
    std::cout << "4 - Add" << std::endl << std::endl;

    std::cin << loFunctionSelection;

    switch (loFunctionSelection)
    {
        case 1: //Search
        {
        }
        case 2://Return
        {
        }
        case 3: //Borrow
        {
        }
        case 4: //Add
        {
        }
    default: //neither of above
    {
    }

    }








    //clLibraryItem loLibraryItem;

    return a.exec();
}
