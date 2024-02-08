// Purpose: Implement the Factory Method pattern to create objects without specifying their concrete classes.

#include <iostream>

class Product {
public:
    virtual void use() = 0;
};

class ConcreteProduct : public Product {
public:
    void use() override {
        std::cout << "Using ConcreteProduct" << std::endl;
    }
};

class Creator {
public:
    virtual Product* createProduct() = 0;
};

class ConcreteCreator : public Creator {
public:
    Product* createProduct() override {
        return new ConcreteProduct();
    }
};

int main() {
    Creator* creator = new ConcreteCreator();
    Product* product = creator->createProduct();
    product->use();

    delete creator;
    delete product;

    return 0;
}
