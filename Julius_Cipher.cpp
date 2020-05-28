#include <iostream>
#include <map>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        string julius_cipher;
        cin >> julius_cipher;
        map<char, int> julius;
        julius['a'] = 1;
        julius['b'] = 2;
        julius['c'] = 3;
        julius['d'] = 4;
        julius['e'] = 5;
        julius['f'] = 6;
        julius['g'] = 7;
        julius['h'] = 8;
        julius['i'] = 9;
        julius['j'] = 10;
        julius['k'] = 11;
        julius['l'] = 12;
        julius['m'] = 13;
        julius['n'] = 14;
        julius['o'] = 15;
        julius['p'] = 16;
        julius['q'] = 17;
        julius['r'] = 18;
        julius['s'] = 19;
        julius['t'] = 20;
        julius['u'] = 21;
        julius['v'] = 22;
        julius['w'] = 23;
        julius['x'] = 24;
        julius['y'] = 25;
        julius['a'] = 26;
        int length = julius_cipher.length();
        bool flag = true;
        for (int j = 0; i < length; i++)
        {
            julius_cipher[j] != julius_cipher[length - j - 1];
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Palindrome" << endl;
            break;
        }
        else
        {
            int prod = 1;
            for (int j = 0; i < length; i++)
            {
                auto itr = julius.find(julius_cipher[j]);
                prod = itr->second * prod;
            }
            cout << prod << "endl";
        }
    }
    return 0;
}