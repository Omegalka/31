#include <iostream>
#include <cstdlib> 
#include <set>

using namespace std;

int main() {

    set<int> my_set;

    my_set.insert(15);
    my_set.insert(4);
    my_set.insert(11);
    my_set.insert(2);
    my_set.insert(10);

    cout << "Tree after adding: ";
    for (const auto& element : my_set) {
        cout << element << " " << "\n";
    }
    my_set.erase(4);
    my_set.erase(2);

    cout << "Tree after deleting: ";
    for (const auto& element : my_set) {
        cout << element << " " << "\n";
    }

    my_set.insert(14);
    my_set.insert(7);
    my_set.insert(9);
    my_set.insert(5);
    my_set.insert(16);

    cout << "Tree after adding: ";
    for (const auto& element : my_set) {
        cout << element << " " << "\n";
    }
    return 0;
}


