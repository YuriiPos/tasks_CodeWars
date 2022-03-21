#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


/*
 * reverse word if 5 letter or more
 *
 *
 */

std::string spinWords(const std::string &str)
{
    using namespace std;
    auto ch = begin(str);
    string check = "";
    string _res = "";
    auto space = find(begin(str), end(str), ' ');
    for(auto it = begin(str); it != end(str); ++it) {

        if (*it == *space) {
            check = string(ch, it);
            if (check.length() >= 5) {
                reverse(check.begin(), check.end());
                _res += check + " ";

            } else {
                _res +=  check + " ";
            }
            ch = ++it;
        }
    }
    check = string(ch, end(str));
    if(check.length() >= 5) {
        reverse(begin(check), end(check));
        _res += check;
    } else _res += check ;
    return _res;
}// spinWords

int main() {
    cout << spinWords("to") << endl;

    return 0;
}
