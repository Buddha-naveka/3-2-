#include"Parking.h"

template <class T>
void Parking<T>::push(T element) {
    elements.push(element);
}

template <class T>
void Parking<T>::pop() {
    elements.pop();
}

template <class T>
T Parking<T>::top() {
    return elements.top();
}
template <class T>
bool Parking<T>::empty() {
    return elements.empty();
}