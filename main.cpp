#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

double find_median(const vector<int>& data) {

    int n = data.size();

    if (n % 2 == 0) {

        int middle1 = data[n / 2 - 1];
        int middle2 = data[n / 2];

        return (middle1 + middle2) / 2.0;

    } else {

        return data[n / 2];
    }
}

int readFile()
{
    // Get the filename from the user
    string file_path;

    cout << "Enter the file name: ";
    cin >> file_path;

    ifstream file(file_path);

    if (!file.is_open()) {

        cout << "Unable to open file '" << file_path << "'.";
        return 1;
    }

    vector<int> data;
    string line;

    //read file integers
    while (getline(file, line)) {

        stringstream ss(line);
        int number;

        while (ss >> number) {

            data.push_back(number);

            if (ss.peek() == ',') {
                ss.ignore();
            }
        }
    }

    file.close();


    //call function to find median
    double median = find_median(data);

    // output
    cout << "The median of the data is: " << median;

    return 0;

}

int main() {
    readFile();

    return 0;
}