#include <iostream>
#include <string>
using namespace std;

class ArraySet {
private:
    string array[10];
    int quantity;

public:
    ArraySet() {
        quantity = 0;
    }

    int size() {
        return quantity;
    }

    bool isEmpty() {
        return quantity == 0;
    }

    bool contains(string s) {
        for (int i = 0; i < quantity; i++) {
            if (array[i] == s) {
                return true;
            }
        }
        return false;
    }

    bool add(string s) {
        if (contains(s)) {
            return false;
        }
        array[quantity] = s;
        quantity++;
        return true;
    }

    void print() {
        cout << "[ ";
        for (int i = 0; i < quantity; i++) {
            cout << array[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    ArraySet set;

    cout << "============================" << endl;
    cout << "TESTE 1 - CONJUNTO VAZIO" << endl;
    cout << "============================" << endl;
    cout << "Conjunto vazio? ";
    cout << set.isEmpty() << endl;
    cout << endl;

    cout << "============================" << endl;
    cout << "TESTE 2 - ADICIONANDO" << endl;
    cout << "============================" << endl;
    cout << "Add Ana: ";
    cout << set.add("Ana") << endl;
    cout << "Add Carlos: ";
    cout << set.add("Carlos") << endl;
    cout << "Add Maria: ";
    cout << set.add("Maria") << endl;
    cout << "Add Ana novamente: ";
    cout << set.add("Ana") << endl;
    cout << endl;

    cout << "============================" << endl;
    cout << "TESTE 3 - PRINT" << endl;
    cout << "============================" << endl;
    set.print();
    cout << endl;

    cout << "============================" << endl;
    cout << "TESTE 4 - SIZE" << endl;
    cout << "============================" << endl;
    cout << "Quantidade: ";
    cout << set.size() << endl;
    cout << endl;

    cout << "============================" << endl;
    cout << "TESTE 5 - CONTAINS" << endl;
    cout << "============================" << endl;
    cout << "Existe Maria? ";
    cout << set.contains("Maria") << endl;
    cout << "Existe Joao? ";
    cout << set.contains("Joao") << endl;
    cout << endl;

    cout << "============================" << endl;
    cout << "TESTE 6 - CONJUNTO VAZIO" << endl;
    cout << "============================" << endl;
    cout << "Conjunto vazio? ";
    cout << set.isEmpty() << endl;
    cout << endl;

    return 0;
}