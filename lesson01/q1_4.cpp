#include <iostream>

using namespace std;

class Rectangle{
public:
    int width;
    int height;

    Rectangle(int w, int h){
        width = w;
        height = h;
    }

    void addWidth(int w){
        width += w;
    }

    void addHeight(int h){
        height = h;
    }

    int area(){
        return width * height;
    }

    void print(){
        cout << "横: " << width << ", 高さ: " << height << ", 面積: " << area() << endl;
    }

    void printAddress(){
        cout << "横(address): " << &width << ", 高さ(address): " << &height << endl;
    }

};

int main() {
    Rectangle rectangle(5, 10);
    rectangle.print();

    rectangle.addWidth(3);
    rectangle.addHeight(6);
    rectangle.print();
    rectangle.printAddress();
}
