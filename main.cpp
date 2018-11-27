#include <iostream>
#include <cmath>
#include <fstream>
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

template <typename InputIterator>
auto standard_deviation(InputIterator first, InputIterator last)
{
    int count;
    // calculate avg
    while (first != last)
    {
        if (*first == m.value)
        {

        }
    }
}
    // root((IIx - avg)^2 / number of II)
    //return sum(sqrt())



int main() {
    ifstream myFile;
    string name;
    int grade;
    mymap<string , int > m;
    myFile.open("studentmarks.txt");
    if (myFile.is_open()) {

        for (int i = 1; myFile.eof(); ++i)
        {
            if (i % 2 == 1) {
                myFile >> m.name;
            }
            if (i % 2 == 0) {
                myFile >> m.grade;
            }

        }
    }
}