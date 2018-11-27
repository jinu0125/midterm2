#include <iostream>
using namespace std;

template <typename K = string, typename V = int>
class mymap
{
    K key;
    V value;
public:
    mymap <K, V > m;


    void add(K key, V value)
    {
        m.insert(make_pair(key,value));
    }

    V operator[] (K key) const{
        m.find(key);
        return value;
    }

    K operator[] (V value) const {
        m.find(value);
        return key;
    }
    void print() {
        for(auto it = m.begin(); it != m.end(); it++){
            cout << "key : " << it->first << " " << "value : " << it->second << '\n';
        }
    }

};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}