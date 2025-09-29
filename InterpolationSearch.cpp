//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int key) {
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = interpolationSearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

/*OUTPUT
Element found at index 3
*/
