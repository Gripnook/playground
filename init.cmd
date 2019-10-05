@echo off

mkdir build
cd build

conan remote add mpusz https://api.bintray.com/conan/mpusz/conan-mpusz
conan install .. && cmake -DCMAKE_GENERATOR_PLATFORM=x64 ..

cd ..
