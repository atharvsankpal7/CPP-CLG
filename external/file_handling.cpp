/*
This program is used to copy a contents of original.txt into the
file named duplicate.txt.
If the file original.txt is present then it copies the data of that
file in the duplicate.txt as it is and if it is not present then
it creates the file adds some data to in it and copies that data in
the duplicate.txt file

later on the line "This is line is only present in duplicate file"
is written on the duplicate.txt to indicate that the file is
duplicate


To check the functionality of the code you can delete the original.txt file
or create a original.txt file and write some content in it
*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string line;
    ofstream file_writer;
    ofstream file_reader_trunc;
    ifstream file_checker;
    file_checker.open("original.txt"); // opens the file in read not if present
    if (!file_checker.is_open())       // checks if the file is open
    {
        file_checker.close();                   // closes the file
        file_reader_trunc.open("original.txt"); // opens the file in write mode

        for (int i = 0; i < 10; i++)
        {
            file_reader_trunc << "This is line number" << i + 1 << endl;
        }

        file_reader_trunc.close();
    }
    file_checker.close();
    ifstream filereader("original.txt"); // opens the file in read mode

    file_writer.open("duplicate.txt", ios::trunc); // used to create the file if not present and delete any previous data if present

    while (getline(filereader, line)) // gets the line from the original.txt and saves the data in the line string
    {
        line += '\n';        // adds the line termination at the end of the string
        file_writer << line; // write the data in duplicate.txt file
    }
    filereader.close();
    file_writer.close();

    ofstream duplicate_indicator;
    duplicate_indicator.open("duplicate.txt", ios::app); // opens file in append mode so that the previous data will not be erased and file can be modified from further part
    duplicate_indicator << "This is line is only present in duplicate file \n";
    duplicate_indicator.close();
    cout << "Program success\n";

    return 0;
}