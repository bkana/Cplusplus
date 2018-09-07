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
        m_name = name;
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
    shared_ptr<Dog> p(new Dog("Gunner")); // Count = 1

    {
        shared_ptr<Dog> p2=p; // Count = 2
        p2->bark();
        cout << p.use_count() << endl;
    }
    // count = 1

    p->bark();
    cout << p.use_count() << endl;
} // Count = 0

int main()
{
    foo();

    return 0;
}
