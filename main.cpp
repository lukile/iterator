#include <iostream>
#include <vector>

using namespace std;

template <typename T> T dot(vector<T> a, vector<T> b);

int main() {

    dot(32, 12);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

template <typename T> T dot(vector<T> a, vector<T> b) {

    //def dot(a,b):
    //    return sum(x*y for x,y in zip(a,b))


    T result = 0;

    for(auto it = a.begin(), end = a.end(); it != end; it++) {
        for(auto it2 = b.begin(), end = b.end(); it2 != end; it2++) {
            result *= it * it2;
        }
    }

    return result;
}