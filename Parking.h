#pragma once
#include <iostream>
#include <stack>
#include <string>

template <class T>
class Parking {
private:
    std::stack<T> elements;

public:
    void push(T element);

    void pop();
    T top();
    bool empty();
};


