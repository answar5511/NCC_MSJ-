
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mishkaWins = 0, chrisWins = 0;
    for (int i = 0; i < n; i++) {
        int mi, ci;
        cin >> mi >> ci;
        if (mi > ci) mishkaWins++;
        else if (ci > mi) chrisWins++;
    }
    if (mishkaWins > chrisWins) cout << "Mishka";
    else if (chrisWins > mishkaWins) cout << "Chris";
    else cout << "Friendship is magic!^^";
}