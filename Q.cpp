//
// Created by danai on 9/20/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

void Q::user_input() {
    cout << "введите количество элементов(N): ";
    cin >> n;
    while (n<=0) {
        cout << "введите положительное кол-во элементов(N)" << endl;;
        cin >> n;
    }
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i  << " элемент: ";
        cin >> a[i];
    }
}

int Q::search() {
    int p = -1;
    bool f = false;
    for (int i = 1; i < n-1; ++i) {
        if((a[i]>a[0]) && (a[i]<a[n-1])) {
            f = true;
            p = i;
            break;
        }
    }
    if(f) {return p;}
    else return -1;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}

int Q::get_a(int nn) const {
    return a[nn];
}