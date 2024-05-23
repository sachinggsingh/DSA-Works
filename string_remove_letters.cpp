/*Remove the vowel form the gievn string*/
#include<cstring>
#include <iostream>
using namespace std;

int main() {
    string A = "Enthusiast";
    int j = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] != 'a' && A[i] != 'e' && A[i] != 'i' && A[i] != 'o' && A[i] != 'u' &&
            A[i] != 'A' && A[i] != 'E' && A[i] != 'I' && A[i] != 'O' && A[i] != 'U') {
            A[j++] = A[i];
        }
    }
    A.resize(j);
    cout << "The String without vowels is " << A << endl;
    
    return 0;
}

