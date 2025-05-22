#include<libraryadmin.h>

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

clLibraryAdmin::clLibraryAdmin()
{

}

void clLibraryAdmin::setmeItemFound(bool paStatus)
{
    meItemFound = paStatus;
}

void clLibraryAdmin::findItem(QString paTitle)
{

    string filename, searchString, line;
    searchString = paTitle.toStdString();

    ifstream file("libraryList.txt");

    if (file.is_open())
    {
        bool lofound = false;
        while (getline(file, line))
        {
            if (line.find(searchString))
            {
                cout << "Results: " << line << endl;
                lofound = true;
            }
        }
        if (!lofound) {
            cout << "String not found in the file." << endl;
        }
        setmeItemFound(lofound);
        file.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }

}

void clLibraryAdmin::addItem()
{

}

void clLibraryAdmin::updateItem()
{

}
