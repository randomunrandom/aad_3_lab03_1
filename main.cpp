/*
 * created by Danil Kireev, PFUR NFIbd-01-17, 20.09.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 20
 * Дан целочисленный массив A размера N.
 * Вывести порядковый номер последнего из тех его элементов A k,
 * которые удовлетворяют двойному неравенству A 1 < A k < A n . Если таких элементов нет, то вывести 0.
 */

int main() {
    cout << "нахождение эллемента большего 1 и меньшего последнего" << endl;
    Q z;
    int res;
    z.user_input();
    z.print();
    res = z.search();
    if(res != -1) {cout << "искомый элемент матрицы: [" << res << "] = " << z.get_a(res) << endl;}
    else cout << "элемент не найден";
    return 0;
}
