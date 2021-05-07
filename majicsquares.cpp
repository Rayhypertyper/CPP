#include <bits/stdc++.h>

using namespace std;

int main() {
    int magic[4][4];
    cin >> magic[0][0] >> magic[0][1]>> magic[0][2]>> magic[0][3]>> magic[1][0]>> magic[1][1]>> magic[1][2]>> magic[1][3]>> magic[2][0]>> magic[2][1]>> magic[2][2]>> magic[2][3]>> magic[3][0]>> magic[3][1]>> magic[3][2]>> magic[3][3];
    if (magic[0][0] + magic[0][1] + magic[0][2] + magic[0][3] == magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0] and magic[0][0] + magic[0][1] + magic[0][2] + magic[0][3] == magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3] and magic[0][0] + magic[0][1] + magic[0][2] + magic[0][3] == magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3] and magic[0][0] + magic[0][1] + magic[0][2] + magic[0][3] == magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3] and

        magic[0][1] + magic[1][1] + magic[2][1] + magic[3][1] == magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0] and magic[0][1] + magic[1][1] + magic[2][1] + magic[3][1] == magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3] and magic[0][1] + magic[1][1] + magic[2][1] + magic[3][1] == magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3] and magic[0][1] + magic[1][1] + magic[2][1] + magic[3][1] == magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3] and

        magic[0][2] + magic[1][2] + magic[2][2] + magic[3][2] == magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0] and magic[0][2] + magic[1][2] + magic[2][2] + magic[3][2] == magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3] and magic[0][2] + magic[1][2] + magic[2][2] + magic[3][2] == magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3] and magic[0][2] + magic[1][2] + magic[2][2] + magic[3][2] == magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3] and

        magic[0][3] + magic[1][3] + magic[2][3] + magic[3][3] == magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0] and magic[0][3] + magic[1][3] + magic[2][3] + magic[3][3] == magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3] and magic[0][3] + magic[1][3] + magic[2][3] + magic[3][3] == magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3] and magic[0][3] + magic[1][3] + magic[2][3] + magic[3][3] == magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3] and

        magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0] == magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3] and magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0] == magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3] and magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0] == magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3] and magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3] == magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3] and magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3] == magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3] and magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3] == magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3] and

        magic[0][0] + magic[0][1] + magic[0][2] + magic[0][3] == magic[0][1] + magic[1][1] + magic[2][1] + magic[3][1] and magic[0][2] + magic[1][2] + magic[2][2] + magic[3][2] == magic[0][1] + magic[1][1] + magic[2][1] + magic[3][1] and magic[0][2] + magic[1][2] + magic[2][2] + magic[3][2] == magic[0][0] + magic[0][1] + magic[0][2] + magic[0][3]) {
        cout << "magic" << endl;
    } else cout << "not magic" << endl;
}