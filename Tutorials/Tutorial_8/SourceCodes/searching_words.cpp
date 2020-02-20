#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// 4a. ADD THE APPROPRIATE PROTOTYPE for a modified searchList function from Lab 8.1
//     that searches for a string value within a string array
int searchList(string story[], int count, string searchWord);



int main() {
    // Character arrays can take in an entire string of characters.
    ifstream inputfile;
    string story[27000];    // this should be enough...
    int count = 0;

    // open file
    inputfile.open("alice_in_wonderland.txt");

    // 1. FILL IN CODE to read all words (without spaces and line breaks)
    //    into the string array story
    while(inputfile >> story[count])count++;


    
    
    
    cout << "There are " << count << " number of words in this story." << endl << endl;

    // close file
    inputfile.close();

    cout << "Printing an excerpt...." << endl;
    // 2. Show an excerpt of the story by PRINTING THE FIRST
    //    100 WORDS OF THE STORY. Use a loop here to achieve that.
    for(int i = 0; i < 100; i++)
    {
        cout << story[i] << " ";
    }

    cout << endl << endl;

    string searchWord = "";
    
    
    while(searchWord != "shit")
    {
        cin >> searchWord;
        int wordloc;
        // 3. MAKE A FUNCTION CALL ON THE searchList FUNCTION
        //    to search the story for the given searchWord. RETURN THE
        //    FOUND LOCATION to variable wordloc
        
        wordloc = searchList(story, count, searchWord);
        
       if(wordloc == -1)
       {
            cout << "The word '" << searchWord << "' does not exist in the story.\n";
       }
       else
       {
            cout << "The first occurrence of '" << searchWord << "' at word #" << wordloc << endl;
            // prints part of the phrase containing the searchWord, for some context
            cout << "...";
            for (int i=wordloc; i<wordloc+10; i++)
                cout << story[i] << " ";
            cout << "..." << endl;
       }
    }    
}

// 4b. WRITE THE DEFINITION for the modified searchList function used earlier in Lab 8.1 
//     to accommodate a string array instead of a character array  
//
//
int searchList(string story[], int count, string searchWord)
{
    for(int i = 0; i < count; i++)
    {
        if(story[i] == searchWord)
        {
            return i;
        }
    }
    return -1;
}









