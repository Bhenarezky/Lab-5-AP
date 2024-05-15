#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x = 25;
    int *px;

    px = &x;
    cout << px << endl;;

    *px = x;
    cout << *px << endl;
    
    return 0;
}