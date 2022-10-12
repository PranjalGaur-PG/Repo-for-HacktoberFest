#include <iostream>

using namespace std;

class Test

{

protected:

int y;

public:

Test (int i):y(i) { }

void jump() const { cout << "jump() const" << endl; } void jump() { cout << "jump() " << endl; }

};

int main()

{

Test t1 (10);

const Test t2 (20);

t1.jump();

t2. jump();

return 0;

}