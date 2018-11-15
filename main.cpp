#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    vector<int> a;
    for(int i=0; i<10; i++)
        a.push_back(i);
    for (vector<int>::size_type i=0; i!=a.size() ; i++)
        cout << a.at(i) << endl;

    return 0;

}