/*
Library Class
Using the provided header file Library.h, write a library class. The class has functions to add
a book, remove a book, and print all books. The library can hold at most 10 books. Refer to the
header file for the implementation details. Write your class implementation in the file Library.cpp.
You also need to write a program that creates a Library object and prompts for one of the following
commands:
a bookName //add the book named bookName to the library if not already existing and
//if there is availability
r bookName //remove the book bookName if it exists in the library
p //print the library contents
q //quit the program
Your program should show messages if it cannot successfully add or remove a book. You can
assume that the input command is always valid, and the book name always consists of a single
word.
Sample run:
Enter command: p
Library contents:
Enter command: a Hobbit
Enter command: a TheLittlePrince
Enter command: r DaVinciCode
Cannot remove the book.
Enter command: a DaVinciCode
Enter command: a TheAlchemist
Enter command: a Heidi
Enter command: a BlackBeauty
Enter command: a LordOfTheRings
Enter command: a ATaleOfTwoCities
Enter command: a WarAndPeace
Enter command: a HarryPotter
Enter command: a TheGirlWithTheDragonTattoo
Cannot add the book.
Enter command: p
Library contents:
Hobbit
TheLittlePrince
DaVinciCode
TheAlchemist
Heidi
BlackBeauty
LordOfTheRings
ATaleOfTwoCities
WarAndPeace
HarryPotter
Enter command: r Heidi
Enter command: a TheGirlWithTheDragonTattoo
Enter command: p
Library contents:
Hobbit
TheLittlePrince
DaVinciCode
TheAlchemist
TheGirlWithTheDragonTattoo
BlackBeauty
LordOfTheRings
ATaleOfTwoCities
WarAndPeace
HarryPotter
Enter command: q
Exiting
To test your program: Run your program as ./a.out < test_input.txt , your output should
be as in the file test_output.txt. It is OK to have extra or missing new lines.
Help me complete this lab task
*/
#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

bool Library::addBook(string bookName)
{
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(string bookName)
{
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

//prints the book names
void Library::print(){
    for(int i = 0; i < 10; i++){
        cout << books[i] << endl;
    }
}
