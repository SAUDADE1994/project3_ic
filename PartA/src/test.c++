#include<iostream>
#include<fstream>
#include<string.h>
#include <cstdlib>
#include<map>

using namespace std;

void leftRotatebyOne(char arr[], int n)
{
    char temp = arr[0];
    int i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n-1] = temp;
}



int main(void) {
    ifstream ifs;
    ifs.open("../example.txt");

    map<string, map<char, uint32_t>> table; // TABLE WITH ALPHABET ELEMENTS

    uint32_t k = 3;

    string txt;
    char ctx[k+1];
    char c;

    ifs.read(ctx, 3);
    ctx[k] = 0;
    while(ifs.get(c)) {
        if(isalpha(c)) {
            txt = string(ctx);
            cout << "ctx = " << txt << "c = " << c << endl;
            table.count(txt) > 0 ? table[txt][c]++ : table[txt][c] = 1;
            leftRotatebyOne(ctx, k);
            ctx[k-1] = c;

        }
    }
    ifs.close();

    return EXIT_SUCCESS;
}