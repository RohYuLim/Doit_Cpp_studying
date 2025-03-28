#include <iostream>
using namespace std;

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int *pointer_array = array;

    cout << "array : " << array << endl;
    cout << "pointer_array : " << pointer_array << endl;

    cout << "array_size : " << sizeof(array) << endl;
    cout << "poinet_array : " << sizeof(pointer_array) << endl;

    return 0;
}