#include "mylib.h"

#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>

int add(int a, int b, const char* value, uint32_t len) {
    auto total = a + b;

    std::stringstream ss;
    ss << "Value is " << total;

    auto min_size = std::minmax(len, static_cast<uint32_t>(ss.str().length())).first;
    strlcpy(const_cast<char*>(value), ss.str().c_str(), min_size);

    return total;
}
