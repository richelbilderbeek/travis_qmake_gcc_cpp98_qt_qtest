#ifndef MY_DIALOG_TEST_H
#define MY_DIALOG_TEST_H

#include <QtTest/QtTest>

class my_dialog_test: public QObject
{
    Q_OBJECT
private slots:
    void close_with_x();
};

#endif // MY_DIALOG_TEST_H
