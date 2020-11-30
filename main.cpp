#include <iostream>
#include <string>

template <class T>
class AddElements {
private:
    T element;
public:
    AddElements(T el) : element(el) {}
    T add(T el2) {
        return element + el2;
    }
};

template <>
class AddElements <std::string> {
private:
    std::string element;
public:
    AddElements(std::string el) : element(el) {}
    std::string concatenate(std::string el2) {
        return element + el2;
    }
};

int main () {
    int n, i;
    std::cin >> n;
    for(i=0;i<n;i++) {
        std::string type;
        std::cin >> type;
        if (type == "float") {
            double element1, element2;
            std::cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            std::cout << myfloat.add(element2) << std::endl;
        }
        else if (type == "int") {
            int element1, element2;
            std::cin >> element1 >> element2;
            AddElements<int> myint (element1);
            std::cout << myint.add(element2) << std::endl;
        }
        else if (type == "string") {
            std::string element1, element2;
            std::cin >> element1 >> element2;
            AddElements<std::string> mystring (element1);
            std::cout << mystring.concatenate(element2) << std::endl;
        }
    }
    return 0;
}
