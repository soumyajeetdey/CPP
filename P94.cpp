// Purpose: Implement the Decorator pattern to dynamically extend the functionality of objects.

#include <iostream>

class Component {
public:
    virtual void operation() = 0;
};

class ConcreteComponent : public Component {
public:
    void operation() override {
        std::cout << "ConcreteComponent operation" << std::endl;
    }
};

class Decorator : public Component {
private:
    Component* component;

public:
    Decorator(Component* component) : component(component) {}

    void operation() override {
        component->operation();
    }
};

class ConcreteDecorator : public Decorator {
public:
    ConcreteDecorator(Component* component) : Decorator(component) {}

    void addedBehavior() {
        std::cout << "Added behavior" << std::endl;
    }

    void operation() override {
        Decorator::operation();
        addedBehavior();
    }
};

int main() {
    Component* component = new ConcreteComponent();
    component->operation();

    Component* decoratedComponent = new ConcreteDecorator(new ConcreteComponent());
    decoratedComponent->operation();

    delete component;
    delete decoratedComponent;

    return 0;
}
