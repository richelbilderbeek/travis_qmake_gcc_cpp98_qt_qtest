#!/bin/bash
qmake travis_qmake_gcc_cpp98_qt_qtest.pro
make
# ./travis_qmake_gcc_cpp98_qt_qtest # Do not run on Travis