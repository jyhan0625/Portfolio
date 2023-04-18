#include<iostream>
using namespace std;

void print(int n);

int main() {

    int code[27][10] = {

        {0,0,0,0,0,0,0,0,0,0},
        {1,1,2,2,2,1,1,2,2,2},
        {3,1,2,2,3,3,2,2,1,3},
        {1,1,4,4,4,4,4,4,1,1},
        {3,1,2,2,2,2,2,2,1,3},
        {1,1,4,4,5,5,4,4,1,1},
        {1,1,4,4,5,5,4,4,4,4},
        {1,1,4,4,4,6,6,2,1,1},
        {2,2,2,2,1,1,2,2,2,2},
        {1,1,7,7,7,7,7,7,1,1},
        {1,1,8,8,8,8,9,9,1,1},
        {10,11,12,13,14,14,13,12,11,10},
        {4,4,4,4,4,4,4,4,1,1},
        {2,15,1,1,1,16,2,2,2,2},
        {2,2,17,18,19,20,6,10,2,2},
        {1,1,2,2,2,2,2,2,1,1},
        {1,1,2,2,1,1,4,4,4,4},
        {3,3,9,9,9,9,11,11,1,1},
        {1,1,2,2,10,24,24,10,2,2},
        {1,1,4,4,1,1,21,21,1,1},
        {1,1,7,7,7,7,7,7,7,7},
        {2,2,2,2,2,2,2,2,1,1},
        {2,2,2,2,2,15,22,22,23,7},
        {2,2,2,2,16,16,16,1,1,16},
        {2,2,15,24,23,23,24,15,2,2},
        {2,2,2,2,1,1,21,21,1,1},
        {1,1,25,26,27,28,29,30,1,1}

    };

    int length;
    char inputs[1000000];
    cin.getline(inputs, 100000);
    for (int i=0; i<100000; i++) {if (inputs[i]=='\0') {length = i; break;}}

    for (int i=0; i<10; i++) {

        for (int j=0; j<length; j++) {

            if (inputs[j]==' ') print(code[0][i]);
            else print(code[inputs[j]-64][i]);
            cout << " ";
        }

        cout << endl;

    }

}

void print(int n) {
    if (n == 0) cout << "        ";
    else if (n == 1) cout << "◼◼◼◼◼◼◼◼";
    else if (n == 2) cout << "◼◼    ◼◼";
    else if (n == 3) cout << "◼◼◼◼◼◼◼ ";
    else if (n == 4) cout << "◼◼      ";
    else if (n == 5) cout << "◼◼◼◼◼◼  ";
    else if (n == 6) cout << "◼◼  ◼◼◼◼";
    else if (n == 7) cout << "   ◼◼   ";
    else if (n == 8) cout << "     ◼◼ ";
    else if (n == 9) cout << "◼◼   ◼◼ ";
    else if (n == 10) cout << "◼◼  ◼◼◼ ";
    else if (n == 11) cout << "◼◼  ◼◼◼ ";
    else if (n == 12) cout << "◼◼ ◼◼◼  ";
    else if (n == 13) cout << "◼◼◼◼◼   ";
    else if (n == 14) cout << "◼◼◼◼    ";
    else if (n == 15) cout << "◼◼◼  ◼◼◼";
    else if (n == 16) cout << "◼◼ ◼◼ ◼◼";
    else if (n == 17) cout << "◼◼◼   ◼◼";
    else if (n == 18) cout << "◼◼◼◼  ◼◼";
    else if (n == 19) cout << "◼◼◼◼◼ ◼◼";
    else if (n == 20) cout << "◼◼ ◼◼◼◼◼";
    else if (n == 21) cout << "      ◼◼";
    else if (n == 22) cout << " ◼◼  ◼◼ ";
    else if (n == 23) cout << "  ◼◼◼◼  ";
    else if (n == 24) cout << " ◼◼◼◼◼◼ ";
    else if (n == 25) cout << "     ◼◼◼";
    else if (n == 26) cout << "    ◼◼◼ ";
    else if (n == 27) cout << "   ◼◼◼  ";
    else if (n == 28) cout << "  ◼◼◼   ";
    else if (n == 29) cout << " ◼◼◼    ";
    else if (n == 30) cout << "◼◼◼     ";
}
