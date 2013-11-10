#ifndef Node_CPP
#define Node_CPP
#include <iostream>
#include "Node.h"
using namespace std;

template <class T>
Node<T>::Node(T *newData, Node *nextNode){
	data = newData;
	next = nextNode;
}
template <class T>
Node<T>::Node(T *newData){
	data = newData;
	next = NULL;
}
template <class T>
Node<T>::Node(){
	data = NULL;
	next = NULL;
}
template <class T>
Node<T>::~Node(){
	delete next;
	delete data;
}
template <class T>
Node<T>* Node<T>::getNext(){
	return next;
}
template <class T>
void Node<T>::setNext(Node *nextNode){
	next = nextNode;
}
template <class T>
T* Node<T>::getData(){
	return data;
}
template <class T>
void Node<T>::setData(T *newData){
	data = newData;
}

#endif