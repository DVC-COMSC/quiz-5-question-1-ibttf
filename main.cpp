#include    <iostream>
using namespace std;

int main()
{
   int N;
    cout << "Enter the number of rows: ";
    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << "\n";
    }

    return 0;

  
}
