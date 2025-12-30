#include <iostream>
using namespace std;

struct bit {
    int mult;
    int bits;  // changed from char to int
};

int main() {
    struct bit eight = { 1, 8 };
    struct bit sixteen = { 1, 16 };
    struct bit thirtytwo = { 1, 32 };
    struct bit sixtyfour = { 1, 64 };

    int a;
    cout << "Words to bytes or bytes to words (1 FOR WORDS TO BYTES, 2 FOR BYTES TO WORDS): ";
    cin >> a;

    if (a == 1) { 
        int b;
        cout << "Bits: ";
        cin >> b;

        int x;
        cout << "How many words: ";
        cin >> x;

        if (b == eight.bits) {
            cout << x * eight.bits / 8 << " bytes\n";
        }
        else if (b == sixteen.bits) {
            cout << x * sixteen.bits / 8 << " bytes\n";
        }
        else if (b == thirtytwo.bits) {
            cout << x * thirtytwo.bits / 8 << " bytes\n";
        }
        else if (b == sixtyfour.bits) {
            cout << x * sixtyfour.bits / 8 << " bytes\n";
        }
        else {
            cout << "invalid bits\n";
        }
    }
    else if (a == 2) {
        int b;
        cout << "Bits: ";
        cin >> b;

        int x;
        cout << "How many bytes: ";
        cin >> x;

        if (b == eight.bits) {
            cout << x * 8 * eight.bits << " words\n";
        }
        else if (b == sixteen.bits) {
            cout << x * 8 / sixteen.bits << " words\n";
        }
        else if (b == thirtytwo.bits) {
            cout << x * 8 / thirtytwo.bits << " words\n";
        }
        else if (b == sixtyfour.bits) {
            cout << x * 8 / sixtyfour.bits << " words\n";
        }
        else {
            cout << "invalid bits\n";
        }
    }
    else {
        std::cout << "Invalid";
    }

    return 0;
}
