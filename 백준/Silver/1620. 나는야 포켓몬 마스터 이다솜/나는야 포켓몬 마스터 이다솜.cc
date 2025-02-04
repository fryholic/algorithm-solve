#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>
#include <stack>

using namespace std;

template<typename K, typename V>
class BidirectionalMap {
private:
    unordered_map<K, V> key_to_value;
    unordered_map<V, K> value_to_key;
public:
    void insert(const K& key, const V& value) {
        key_to_value[key] = value;
        value_to_key[value] = key;
    }
    V get_value(const K& key) const {
        return key_to_value.at(key);
    }
    K get_key(const V& value) const {
        return value_to_key.at(value);
    }
};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M;
    cin >> N >> M;

    BidirectionalMap<int, string> pokedex;

    for (int i = 1; i <= N; i++) {
        string pokemon;
        cin >> pokemon;
        pokedex.insert(i, pokemon);
    }

    for (int i = 0; i < M; i++) {
        string quest;
        cin >> quest;
        if (isdigit(quest[0])) {
            cout << pokedex.get_value(stoi(quest)) << '\n';
        }
        else {
            cout << pokedex.get_key(quest) << '\n';
        }
    }



    return 0;

}