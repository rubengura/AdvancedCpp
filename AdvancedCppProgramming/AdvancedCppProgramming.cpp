

#include <iostream>
using namespace std;

void mightGoWrong() {
    bool error = true;

    if (error) {
        throw 8;
    }
}

void mightGoWrongPrimitiveString() {
    bool error = true;

    if (error) {
        throw "There was an error in the code";
    }
}

void mightGoWrongString() {
    bool error = true;

    if (error) {
        throw string("An error was found in the code")
    }
}

int main()
{
    try {
        mightGoWrong();
    }
    catch (int e) {
        cout << "Error code: " << e << endl;
    }

    try {
        mightGoWrongPrimitiveString();
    }
    catch (char const * e) {
        cout << "Error code: " << e << endl;
    }

    try {
        mightGoWrongString();
    }
    catch (string &e) {
        cout << "Error code: " << e << endl;
    }
    

    cout << "However the code is still running" << endl;

    return 0;
}

