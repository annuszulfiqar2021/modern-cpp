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


int test(int argc, char** argv) {
    // std::unique_ptr<Person> pointer_to_annus = std::make_unique<Person>("Annus Zulfiqar");
    // std::cout << "My (indirect) name is " << pointer_to_annus->get_name() << std::endl;

    std::shared_ptr<Person> shared_pointer_to_annus = std::make_shared<Person>("Annus Zulfiqar");
    std::cout << "My (indirect) name is " << shared_pointer_to_annus->get_name() << std::endl;

    std::shared_ptr<Person> shared_pointer_to_shared_pointer_to_annus = shared_pointer_to_annus;
    std::cout << "My (indirect-indirect) name is " << shared_pointer_to_shared_pointer_to_annus->get_name() << std::endl;

    return 0;
}


int vector_sum(const std::vector<int> &vec) {
    int result = 0;
    for (int val: vec) {
        result += val;
    }
    return result;
}

 
int main(int argc, char** argv) {
    int LIMIT = 100000000;
    std::vector<int> test_vec(LIMIT);
    std::cout << "Beginning to populate the vector.." << std::endl;
    for (int i=1; i<=LIMIT; i++) {
        test_vec.push_back(i);
    }
    std::cout << "Vector populated.." << std::endl;
    std::cout << "Sum of the vector = " << vector_sum(test_vec) << std::endl;
    std::cout << "Actual sum of the vector = " << int(LIMIT*(LIMIT+1)/2) << std::endl;
    return 0;
}