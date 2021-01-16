sudo apt install libgtest-dev
# Go to your home
cd ~
# Compiling the lib
g++ -I /usr/include/gtest -I /usr/src/gtest/ -c /usr/src/gtest/src/gtest-all.cc
# Archiving the generated file to a static library
ar -rv libgtest.a gtest-all.o
# Move to a place that the GCC Linker can find
mv libgtest.a /usr/local/lib/

# Reference
# https://blog.zerokol.com/2012/10/installing-gtest-on-ubuntu-test.html
