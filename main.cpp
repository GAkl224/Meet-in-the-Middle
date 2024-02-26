#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>


using namespace std;
void readFile(){
    string fileName;
    ifstream file;

    //user input
    //user enters file name to recover
    cout << "Enter file name: ";
    getline(cin, fileName);

    file.open(fileName);

    string number;

    getline(file, number);

    //while (getline(file, number)) {
      //  cout << line << endl;
        //cout << 1;
   // }
    cout << 1;
    while(!file.eof()){
        cout << 1;
                file >> number;
            cout << number << ",";
        cout << 2;
            }
            cout << 3;
    file.close();
}
int main()
{
    
    readFile();
    return 0;
}