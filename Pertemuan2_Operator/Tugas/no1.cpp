#include <iostream>
using namespace std;

int main() {
    int I = 2, K = 7, L = 1, C = 9, U = 5, S = 6;

    bool a = 3 - 1 < 1 || K - 5 < 8 + 2 && L + 7 >= 9 + 3;
    bool b = L % 3 > U && (C / U < S || 3 * 1 - K > 0);
    bool c = I - 9 > K || L + 3 < 4 * C;
    int d = I | K & L ^ 3 << 2;

    cout << "Hasil a: " << a << endl;
    cout << "Hasil b: " << b << endl;
    cout << "Hasil c: " << c << endl;
    cout << "Hasil d: " << d << endl;

    return 0;

}

/*
A. 3−1<1 OR (K−5<8+2 AND L+7≥9+3)
=(K-5<8+2 AND L+7>=9+3)
7-5<10 AND 1+7 >=12
2<10 AND 8>=12
TRUE AND FALSE
FALSE

=3-1<1 OR FALSE
2<1 OR FALSE 
FALSE OR FALSE
FALSE

B. L%3>U AND (C/U<S OR 3*I-K>0)
=(C/U<S OR 3*1-K>0)
9/5<6 OR 3*1-7>0
1<6 OR 3*1-7>0
TRUE OR -4>0
TRUE OR FALSE
TRUE

=L%3>U AND TRUE
1%3>5 AND TRUE
1>5 AND TRUE
FALSE AND TRUE
FALSE

C. I-9>K OR L+3<4*C
=2-9>7 OR 1+3<4*9
-7>7 OR 4<36
FALSE OR TRUE
TRUE

D. I OR K AND L XOR 3 SHL 2 (bitwise)
=0010 OR 0111 AND 0001 XOR (0011 SHL 2)
0010 OR 0111 AND 0001 XOR 1100
0010 0R OOO1 XOR 1100
0010 OR 1101
1111

*/


