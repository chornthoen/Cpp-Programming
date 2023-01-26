
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char c, key;
    while (1) {

        cout << "enter a character ? ";
        cin.get(c);
        cout << "A char c =" << c;
        if (isalnum(c)) {
            if (islower(c))
                cout << " is a lower char....\n";
            else if (isupper(c))
                cout << " is an upper char ...\n";
            else if (isdigit(c))
                cout << " is a digit char \n";
            else; // do nothing
        } else if (isspace(c)) {
            if (c == ' ')
                cout << " is a space .....\n";
            else if (c == '\n')
                cout << " is a newline....\n";
            else if (c == '\t')
                cout << "is  a tab......\n";
            else;// do nothing
        } else
            cout << " is a printable char ......" << endl;

        do {
            cout << endl;
            cout << " press <c> to next input " << endl;
            cout << " press <n> to exit       " << endl;
            cout << " please press ? ";
            cin.sync(); // clear buffer
        } while (cin.get(key), key != 'c' && c != 'C' && key != 'n' && key != 'N');
        if (key == 'n' || key == 'N') break;
        cin.ignore(20, '\n'); // clear buffer....
        system("cls"); // clear screen...
    }
    cout << endl;
    cout << "bye bye !!" << endl;
    return 0;
}
