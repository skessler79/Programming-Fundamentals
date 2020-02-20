#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void printVec(const vector<string>);

int main() {
    ifstream inputfile;
    string wisewords;
    int dashloc;
    vector<string> authors;

    // open file
    inputfile.open("quotes.dat");

    // loop through each row of quotes, and proceed to get each line as a string
    while (getline(inputfile, wisewords)) {

        // 1. CALL string.find() function to search for a specific string from
        //    each line of quote, and store the location in variable dashloc. Look up
        //    the C++ reference for strings to see in detail how to use this function.
        //    Notice that the author of the quote always appears after a double dash.
        dashloc = wisewords.find("--");
        

        // Extract the substring containing the author name using the found location
        // of the double dash.
        string author;
        author = wisewords.substr(dashloc+2, string::npos);

        // 2. ADD the author name to the vector authors
        authors.push_back(author);

    }
    // close file
    inputfile.close();

    cout << "Author List: " << endl;
    printVec(authors);

    // 4. CALL sort function (you need to include <algorithm>) to sort the
    // vector of authors. Look up the C++ reference on how to use this function
    sort(authors.begin(), authors.end(), greater<string>());

    cout << "Sorted List:" << endl;
    printVec(authors);
}

// 3. COMPLETE the function printVec that takes in a vector of strings as input
//    and prints out all its contents, one line each. Use a range for-loop to achieve this.
void printVec(const vector<string> line) {
    for(auto i : line)
        cout << i << endl;
    cout << endl;
}
