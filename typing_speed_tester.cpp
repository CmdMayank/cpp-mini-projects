    #include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <chrono>

using namespace std;

 string pickRandomSentence( const string sentences[], int size)
 {
    if(size==0)
    return ""; // safety
    int index = rand() % size;
    return sentences[index];
 }

int main()
{
    srand((unsigned) time(0));

    string sentences[] ={
      "The quick brown fox jumps over the lazy dog",
        "C++ is a powerful and flexible language",
        "Practice makes a person perfect",
        "Typing fast is a useful skill to learn",
        "GitHub helps you share your code with the world"
    };

    int size = sizeof(sentences)/ sizeof(sentences[0]);
    cout<<"===== Typing Speed Tester (Phase 1, array version) =====\n\n";
    string chosenSentence = pickRandomSentence(sentences , size);
    cout<<"Type this sentence Exactly: \n\n";
    cout<< chosenSentence <<" \n\n";

    //to take the full input:
   

//cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
string userInput;
getline(cin, userInput);

// Comparison of Userinput with Chosensentence:
if(userInput == chosenSentence)
{
    cout << "\nPerfect! You typed it correctly :)";
}
else 
{
    cout << "\nNot Exact... Keep practicing.";
    cout << "\nYou typed  : " << userInput << endl;
    cout << "Expected   : " << chosenSentence << endl;
}

  
    return 0;
}
