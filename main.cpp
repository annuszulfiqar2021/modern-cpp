#include <iostream>
#include <string>
#include <memory>


class Person {
private:
    std::string _name;
public:
    Person(std::string name) {
        _name = name;
        std::cout << _name << " created" << std::endl;
    }
    ~Person() {
        std::cout << _name << " destroyed" << std::endl;
    }
    std::string get_name() {
        return _name;
    }
};


int main(int argc, char** argv) {
    // std::unique_ptr<Person> pointer_to_annus = std::make_unique<Person>("Annus Zulfiqar");
    // std::cout << "My (indirect) name is " << pointer_to_annus->get_name() << std::endl;

    std::shared_ptr<Person> shared_pointer_to_annus = std::make_shared<Person>("Annus Zulfiqar");
    std::cout << "My (indirect) name is " << shared_pointer_to_annus->get_name() << std::endl;

    std::shared_ptr<Person> shared_pointer_to_shared_pointer_to_annus = shared_pointer_to_annus;
    std::cout << "My (indirect-indirect) name is " << shared_pointer_to_shared_pointer_to_annus->get_name() << std::endl;

    return 0;
}