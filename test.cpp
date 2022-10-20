#include <cstdint>
#include <cstdio>

int main(int, char**) {
    printf("clang version: %d\n", __clang_major__);
    printf("libc++ version: %d\n", _LIBCPP_VERSION);
    if (false) {
        printf("%llu\n", std::uint64_t{}); // Plebian warning
        printf("%lu\n", std::uint64_t{});  // Apple warning
    }
    return 0;
}
