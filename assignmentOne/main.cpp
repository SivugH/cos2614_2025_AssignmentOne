#include <QCoreApplication>
#include <iostream>
#include <sstream>
#include <QVector>
#include <fstream>
#include <QStringList>

#include "magazine.h"
#include "book.h"
#include "libraryitem.h"

using namespace std;

void BookDetails(string &paTitle, string &paAuthor, string &paGenre)
{
    cout << "*************************************************************" << endl;
    cout << "Enter Book Details:" << endl << endl;
    cout << "Title:";
    cin >> paTitle;
    cout << "Author:";
    cin >> paAuthor;
    cout << "Genre:";
    cin >> paGenre;
}

void MagazineDetails(string &paTitle, string &paAuthor, int &paIssuedNumber)
{
    cout << "*************************************************************" << endl;
    cout << "Enter Magazine Details:" << endl << endl;
    cout << "Title:";
    cin >> paTitle;
    cout << "Author:";
    cin >> paAuthor;
    cout << "Issue Number:";
    cin >> paIssuedNumber;
}

void ItemSelection(int paFunction)
{
    int i = 111;
    string loTitle, loAuthor, loGenre;
    int loIssuedNumber, loUserChoice;
    cout << "*************************************************************" << endl;
    cout << "Enter the following:" << endl;

    cout << "1 - Book" << endl;
    cout << "2 - Magazine" << endl;
    cout << "Option: ";
    ifstream file("libraryList.txt");
    string searchString, line;



    cin >> loUserChoice;

    if (loUserChoice == 1) //Book
    {
        clBook loBook;
        BookDetails(loTitle, loAuthor, loGenre);


        loBook.setTitle(QString::fromStdString(loTitle));
        loBook.setAutor(QString::fromStdString(loAuthor));
        loBook.setGenre(QString::fromStdString(loGenre));

        switch (paFunction)
        {
        case 1: //Search
        {
            if (file.is_open())
            {
                bool lofound = false;
                while (getline(file, line))
                {
                    if (line.find(searchString))
                    {
                        cout << "Results: " << line << endl;
                        lofound = true;
                        loBook.setResultString(QString::fromStdString(line));
                    }
                }
                if (!lofound)
                {
                    cout << "String not found in the file." << endl;
                }
                loBook.setmeItemFound(lofound);
                file.close();
                break;
            }
        }
        case 2://Return
        {
            if (file.is_open())
            {
                bool lofound = false;
                while (getline(file, line))
                {
                    if (line.find(searchString))
                    {
                        cout << "Results: " << line << endl;
                        lofound = true;
                        loBook.setResultString(QString::fromStdString(line));
                        loBook.setBorrowedStatus(0);
                    }
                }
                if (!lofound)
                {
                    cout << "String not found in the file." << endl;
                }
                loBook.setmeItemFound(lofound);
                file.close();
                break;
            }
        }
        case 3: //Borrow

        {
            if (file.is_open())
            {
                bool lofound = false;
                while (getline(file, line))
                {
                    if (line.find(searchString))
                    {
                        cout << "Results: " << line << endl;
                        lofound = true;
                        loBook.setResultString(QString::fromStdString(line));
                        loBook.setBorrowedStatus(1);
                    }
                }
                if (!lofound) {
                    cout << "String not found in the file." << endl;
                }
                loBook.setmeItemFound(lofound);
                file.close();
                break;
            }

        }
        case 4: //Add
        {
            loBook.setBorrowedStatus(0);

            QString loNewItem = "book,";
            loNewItem.append(QString::number(i));
            loNewItem.append(',');
            loNewItem.append(loBook.getTitle());
            loNewItem.append(",");
            loNewItem.append(loBook.getAuthor());
            loNewItem.append(",");
            loNewItem.append(loBook.getGenre());
            loNewItem.append(",");
            loNewItem.append(QString::number(loBook.getBorrowedStatus()));


            loBook.addItem(loNewItem);
            break;
        }

        }
    }


    else if (loUserChoice == 2)//Magazine
    {
        string searchString, line;
        clMagazine loMagazine;
        MagazineDetails(loTitle, loAuthor, loIssuedNumber);


        loMagazine.setTitle(QString::fromStdString(loTitle));
        loMagazine.setAutor(QString::fromStdString(loAuthor));
        loMagazine.setMagazineIssueNumber(loIssuedNumber);

        cout << loMagazine.getResultString().toStdString() << endl;


        switch (paFunction)
        {
        case 1: //Search
        {
            if (file.is_open())
            {
                bool lofound = false;
                while (getline(file, line))
                {
                    if (line.find(searchString))
                    {
                        cout << "Results: " << line << endl;
                        lofound = true;
                        loMagazine.setResultString(QString::fromStdString(line));
                    }
                }
                if (!lofound)
                {
                    cout << "String not found in the file." << endl;
                }
                loMagazine.setmeItemFound(lofound);
                file.close();
                break;
            }
        }

        case 2://Return

        {
            if (file.is_open())
            {
                bool lofound = false;
                while (getline(file, line))
                {
                    if (line.find(searchString))
                    {
                        cout << "Results: " << line << endl;
                        lofound = true;
                        loMagazine.setResultString(QString::fromStdString(line));
                        loMagazine.setBorrowedStatus(0);
                    }
                }
                if (!lofound)
                {
                    cout << "String not found in the file." << endl;
                }
                loMagazine.setmeItemFound(lofound);
                file.close();

            }
            break;
        }

        case 3: //Borrow

        {
            if (file.is_open())
            {
                bool lofound = false;
                while (getline(file, line))
                {
                    if (line.find(searchString))
                    {
                        cout << "Results: " << line << endl;
                        lofound = true;
                        loMagazine.setResultString(QString::fromStdString(line));
                        loMagazine.setBorrowedStatus(1);
                    }
                }
                if (!lofound)
                {
                    cout << "String not found in the file." << endl;
                }
                loMagazine.setmeItemFound(lofound);
                file.close();
                break;
            }

        }
        case 4: //Add
        {
            loMagazine.setBorrowedStatus(0);

            QString loNewItem = "magazine,";
            loNewItem.append(QString::number(i));
            loNewItem.append(",");
            loNewItem.append(loMagazine.getTitle());
            loNewItem.append(",");
            loNewItem.append(loMagazine.getAuthor());
            loNewItem.append(",");
            loNewItem.append(QString::number(loMagazine.getIssuedNumber()));
            loNewItem.append(",");
            loNewItem.append(QString::number(loMagazine.getBorrowedStatus()));

            loMagazine.addItem(loNewItem);
            break;
        }
        }
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "*************************************************************" << endl;
    cout << "Welcome to Sivu's Library" << endl << endl;
    cout << "Select the following: " << endl << endl;
    cout << "1 - Search" << endl;
    cout << "2 - Return an Item" << endl;
    cout << "3 - Borrow an Item" << endl;
    cout << "4 - Add an Item" << endl << endl;

    int loFunctionSelection;
    cin >> loFunctionSelection;

    switch (loFunctionSelection)
    {
    case 1: //Search
    {
        ItemSelection(loFunctionSelection);
        break;
    }
    case 2://Return
    {
        ItemSelection(loFunctionSelection);
        break;
    }

    case 3: //Borrow
    {
        ItemSelection(loFunctionSelection);
        break;
    }
    case 4: //Add
    {
        ItemSelection(loFunctionSelection);
        break;
    }
    default:
    {
        cout << "No selection was made" << endl;
        break;
    }
    }
    return 0;
}

