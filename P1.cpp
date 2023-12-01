//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

int main(){
    Library library;
    //ask for commands and execute
    string command;
    cout << "Enter a command (add, remove, print, quit): ";
    while(cin >> command){
        if(command == "add"){
            string bookName;
            cin >> bookName;
            if(library.addBook(bookName)){
                cout << "Book added" << endl;
            }else{
                cout << "Book already exists or library is full" << endl;
            }
        }else if(command == "remove"){
            string bookName;
            cin >> bookName;
            if(library.removeBook(bookName)){
                cout << "Book removed" << endl;
            }else{
                cout << "Book does not exist" << endl;
            }
        }else if(command == "print"){
            library.print();
        }else if (command == "quit"){
            cout << "Quitting"<<endl;
            return 0;
        }
        else{
            cout << "Invalid command" << endl;
        }
    }
    


}
