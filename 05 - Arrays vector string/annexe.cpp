#include "annexe.h"
#include <sstream>
using namespace std;

string to_string(const vector<int>& v) {
    stringstream ss;
    ss << '[';
    for (size_t i = 0; i < v.size(); ++i) {
        if (i > 0) {
            ss << ", ";
        }
        ss << v[i];
    }
    ss << ']';
    return ss.str();
}
