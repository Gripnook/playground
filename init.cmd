@echo off

mkdir build
cd build

conan install .. && cmake -DCMAKE_GENERATOR_PLATFORM=x64 ..

cd ..
