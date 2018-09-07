#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Dog
{
private:
    string m_name;
public:
    Dog(string name) {
        cout << "Dog is created: " << name << endl;
    }
    Dog() {
        m_name = "nameless";
        cout << "Nameless dog created." << endl;
    }
    ~Dog() {
        cout << "dog is destroyed: " << m_name << endl;
    }
    void bark(){
        cout << "Dog " << m_name << " rules!" << endl;
    }
};

void foo()
{
    Dog* p = new Dog("Gunner");
    p->bark();

    delete p;
}
int main()
{
    foo();

    return 0;
}
