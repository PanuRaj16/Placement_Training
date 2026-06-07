#include <iostream>
using namespace std;

class SNode {
public:
    int data;
    SNode* next;

    SNode(int val) {
        data = val;
        next = NULL;
    }
};

void insertBeginS(SNode*& head, int val) {
    SNode* newNode = new SNode(val);
    newNode->next = head;
    head = newNode;
}

void insertEndS(SNode*& head, int val) {
    SNode* newNode = new SNode(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    SNode* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void insertPosS(SNode*& head, int pos, int val) {
    if (pos == 1) {
        insertBeginS(head, val);
        return;
    }

    SNode* newNode = new SNode(val);
    SNode* temp = head;

    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (!temp)
        return;

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteBeginS(SNode*& head) {
    if (!head)
        return;

    SNode* temp = head;
    head = head->next;
    delete temp;
}

void deleteEndS(SNode*& head) {
    if (!head)
        return;

    if (!head->next) {
        delete head;
        head = NULL;
        return;
    }

    SNode* temp = head;
    while (temp->next->next)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
}

void deletePosS(SNode*& head, int pos) {
    if (!head)
        return;

    if (pos == 1) {
        deleteBeginS(head);
        return;
    }

    SNode* temp = head;

    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (!temp || !temp->next)
        return;

    SNode* del = temp->next;
    temp->next = del->next;
    delete del;
}

bool searchS(SNode* head, int key) {
    while (head) {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

void displayS(SNode* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

class DNode {
public:
    int data;
    DNode* prev;
    DNode* next;

    DNode(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertBeginD(DNode*& head, int val) {
    DNode* newNode = new DNode(val);

    newNode->next = head;

    if (head)
        head->prev = newNode;

    head = newNode;
}

void insertEndD(DNode*& head, int val) {
    DNode* newNode = new DNode(val);

    if (!head) {
        head = newNode;
        return;
    }

    DNode* temp = head;

    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void insertPosD(DNode*& head, int pos, int val) {
    if (pos == 1) {
        insertBeginD(head, val);
        return;
    }

    DNode* temp = head;

    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (!temp)
        return;

    DNode* newNode = new DNode(val);

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void deleteBeginD(DNode*& head) {
    if (!head)
        return;

    DNode* temp = head;
    head = head->next;

    if (head)
        head->prev = NULL;

    delete temp;
}

void deleteEndD(DNode*& head) {
    if (!head)
        return;

    if (!head->next) {
        delete head;
        head = NULL;
        return;
    }

    DNode* temp = head;

    while (temp->next)
        temp = temp->next;

    temp->prev->next = NULL;
    delete temp;
}

void deletePosD(DNode*& head, int pos) {
    if (!head)
        return;

    if (pos == 1) {
        deleteBeginD(head);
        return;
    }

    DNode* temp = head;

    for (int i = 1; i < pos && temp; i++)
        temp = temp->next;

    if (!temp)
        return;

    if (temp->next)
        temp->next->prev = temp->prev;

    if (temp->prev)
        temp->prev->next = temp->next;

    delete temp;
}

bool searchD(DNode* head, int key) {
    while (head) {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

void displayD(DNode* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    SNode* shead = NULL;

    insertBeginS(shead, 10);
    insertEndS(shead, 20);
    insertPosS(shead, 2, 15);
    displayS(shead);

    DNode* dhead = NULL;

    insertBeginD(dhead, 10);
    insertEndD(dhead, 20);
    insertPosD(dhead, 2, 15);
    displayD(dhead);

    return 0;
}
