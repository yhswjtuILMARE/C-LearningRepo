//
// Created by Administrator on 2018/12/10.
//

#include "Stack.h"

#include <iostream>
using std::cout;
using std::endl;

Stack::Stack() {
    stack_size = 0;
    index = -1;
    p_first = new Node[1];
    p_first->p_next = NULL;
    p_current = p_first;
}
int Stack::get_size() {
    return stack_size;
}

bool Stack::push(Item &item) {
    Node *p_new = new Node[1];
    p_new->item = item;
    if (p_first->p_next == NULL){
        p_first->p_next = p_new;
        p_new->p_next = NULL;
        return true;
    }
    p_current = p_first->p_next;
    p_first->p_next = p_new;
    p_new->p_next = p_current;
    return true;
}

Item Stack::pop() {
    if (p_first->p_next == NULL){
        return Item();
    }
    p_current = p_first->p_next;
    Item result = p_current->item;
    delete []p_current;
    return result;
}
Stack::~Stack() {
    Node *tmp;
    for (Node *p = p_first; p; p = tmp){
        tmp = p->p_next;
        delete []p;
    }
}
std::ostream& Stack::operator<<(std::ostream &os, const Stack &s) {
    for (Node *p = p_first->p_next; p; p = p->p_next){
        cout << p->item << " - ";
    }
}

