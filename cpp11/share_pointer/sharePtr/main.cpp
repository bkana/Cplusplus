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


int main()
{

    shared_ptr<Dog> p = make_shared<Dog>("Tank"); // faster and safer
    p->bark();

    cout << p.use_count() << endl;
    // static_pointer_cast
    // dynamic_pointer_cast
    // const_pointer_cast

    return 0;

} // count = 0
