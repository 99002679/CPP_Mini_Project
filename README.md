# CPP_Mini_Project
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f0f1c5f86e9d458ab49c5d5f1ff36a82)](https://www.codacy.com/gh/99002679/CPP_Mini_Project/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=99002679/CPP_Mini_Project&amp;utm_campaign=Badge_Grade)

![cppcheck-action](https://github.com/99002679/CPP_Mini_Project/workflows/cppcheck-action/badge.svg?branch=main)
name: Unit Test

on:                 #git event that triggers the git flow
  push:
    branches: [ master ]

jobs:             #on event trigger job is assigned 
  build:
    runs-on: ubuntu-latest
    steps:
    - name: Install cmake
      run: sudo apt-get install cmake
    - name: Install gtest manually
      run: sudo apt-get install libgtest-dev && cd /usr/src/gtest && sudo cmake CMakeLists.txt && sudo make && sudo cp *.a /usr/lib && sudo ln -s /usr/lib/libgtest.a /usr/local/lib/libgtest.a && sudo ln -s /usr/lib/libgtest_main.a /usr/local/lib/libgtest_main.a
    - uses: actions/checkout@v1
    - name: Generate make file
      run:  cmake .
    - name: Generate binary File
      run:  make
    - name: Unit Test
      run: ./out
