#include <iostream>


class Entity 
{
public:
    Entity() : name_("Hello world ") 
    {
        std::cout << "Constructor initialized..." << '\n';
    }

    Entity (std::string& entry_name) : name_(entry_name)
    {
        std::cout << "Parameterized Constructor initialized..." << '\n';
    }

    std::string get_name() {
        return name_;
    }

    std::string set_name() {
        name_ = "my_name";
        return name_;
    }

private:
    std::string name_;
};


int main()
{   

    std::string my_name = "main_name"; 

    Entity e;


    std::cout << e.get_name() << '\n'; 
    std::cout << e.set_name() << '\n'; 

    std::cout << my_name << '\n';

    return 0;
}