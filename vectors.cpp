#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;

    // Insert elements into the vector using push_back()
    v.push_back(1);
    v.push_back(2);

    // Print the elements of the vector using a for loop and array-style indexing
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Print the elements of the vector using an iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Print the elements of the vector using a range-based for loop
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    // Remove the last element from the vector using pop_back()
    v.pop_back();

    // Create a new vector with 3 elements, all initialized to 50
    vector<int> v2(3, 50);

    // Swap the contents of v and v2 using swap()
    swap(v, v2);

    // Print the elements of v after the swap
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    // Print the elements of v2 after the swap
    for (auto element : v2) {
        cout << element << " ";
        
    }
    cout << endl;

    // Sort the elements of v in ascending order using sort()
    sort(v.begin(), v.end());

    return 0;
}
