```bash
cmake -B build .
cmake --build

cd zig
zig build run
```


error:
```bash
run
└─ run zig
   └─ install
      └─ install zig
         └─ zig build-exe zig Debug native 8 errors
error: ld.lld: undefined symbol: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>::basic_stringstream()
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: ld.lld: undefined symbol: std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&, char const*)
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: ld.lld: undefined symbol: std::ostream::operator<<(int)
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: ld.lld: undefined symbol: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>::str() const
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: ld.lld: undefined symbol: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::length() const
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: ld.lld: undefined symbol: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string()
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: ld.lld: undefined symbol: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::c_str() const
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: ld.lld: undefined symbol: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>::~basic_stringstream()
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
    note: referenced by mylib.cpp
    note:               mylib.cpp.o:(add) in archive /home/user/dev/c_lib_test/mylib/build/libMyLib.a
error: the following command failed with 8 compilation errors:
/usr/bin/zig build-exe /home/user/dev/c_lib_test/mylib/build/libMyLib.a -ODebug -I /home/user/dev/c_lib_test/mylib -Mroot=/home/user/dev/c_lib_test/zig/src/main.zig -lc++ --cache-dir /home/user/dev/c_lib_test/zig/.zig-cache --global-cache-dir /home/user/.cache/zig --name zig --listen=- 
Build Summary: 2/7 steps succeeded; 1 failed (disable with --summary none)
run transitive failure
└─ run zig transitive failure
   ├─ zig build-exe zig Debug native 8 errors
   └─ install transitive failure
      └─ install zig transitive failure
         └─ zig build-exe zig Debug native (reused)
error: the following build command failed with exit code 1:
/home/user/dev/c_lib_test/zig/.zig-cache/o/6ff1871015cedd4792cce63ee92abf89/build /usr/bin/zig /home/user/dev/c_lib_test/zig /home/user/dev/c_lib_test/zig/.zig-cache /home/user/.cache/zig --seed 0x79444c68 -Z54c6a0f436096e8f run
```