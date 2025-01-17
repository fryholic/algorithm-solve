#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



struct Point {
    int x, y;

    bool operator<(const Point& other) const {
        if (y == other.y) {
            return x < other.x;
        }
        return y < other.y;
    }
};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
        
    int N;
    cin >> N;

    vector<Point> points;

    for (int i = 0; i < N; i++) {
        Point p;
        cin >> p.x >> p.y;
        points.push_back(p);
    }

    sort(points.begin(), points.end());

    for (const auto& p : points) {
        cout << p.x << ' ' << p.y << '\n';
    }

    return 0;

}