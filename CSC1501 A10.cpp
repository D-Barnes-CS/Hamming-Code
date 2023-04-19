

#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;
int main()
{
    int count = 0;
    while (count < 5) {
        string ham; string message;
        string s1, s2, s4;
        int parity;
        cin >> ham;
        int x = 0;    int checker = 0;    int changer = 0;
        s1 = ham[0]; s1 += ham[2]; s1 += ham[4]; s1 += ham[6];
        s2 = ham[1]; s2 += ham[2]; s2 += ham[5]; s2 += ham[6];
        s4 = ham[3]; s4 += ham[4]; s4 += ham[5]; s4 += ham[6];
        //First Parity
        for (int i = 0; i < s1.length(); i++) {
            checker += (int(s1.at(i)) - 48);
        }
        if (checker % 2 == 0) {
            parity = 0;
        }
        else {
            parity = 1;
        }
        checker = 0;
        //Second Parity
        for (int i = 0; i < s2.length(); i++) {
            checker += int(s2.at(i)) - 48;
        }
        if (checker % 2 == 0) {
            parity += 0;
        }
        else {
            parity += 2;
        }
        checker = 0;
        //Fourth Parity
        for (int i = 0; i < s4.length(); i++) {
            checker += int(s4.at(i)) - 48;
        }
        if (checker % 2 == 0) {
            parity += 0;
        }
        else {
            parity += 4;
        }
        if (parity > 0) {
            cout << "There is an incorrect message at index " << parity << endl;
            if (ham[parity - 1] == 0) {
                ham[parity - 1] = '1';
            }
            else {
                ham[parity - 1] = '0';
            }
        }
        else {
            cout << "Message is correct: ";
        }
        message.push_back(ham[2]); message.push_back(ham[4]); message.push_back(ham[5]); message.push_back(ham[6]);
        //{ ham[2], ham[4], ham[5], ham[6] };
        //message = ham[2] + ham[4] + ham[5] + ham[6];
        cout << message << endl;
        count++;
    }
}
