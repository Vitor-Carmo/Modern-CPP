#include <iostream>
using namespace std;

// herança

class Printable
{
public:
    virtual void print() const = 0; // 0 it's just a pure virtual function
};

class Rect : public Printable
{
protected:
    int width_ = 0;
    int height_ = 0;

public:
    Rect(int w, int h) : width_{w}, height_{h} {}

    int width() const { return width_; }
    int height() const { return height_; }

    void print() const override
    {
        cout << "rect: " << width_ << " " << height_ << endl;
    }
};

class Square : public Rect
{
public:
    explicit Square(int size) : Rect(size, size) {}

    void print() const override
    {
        cout << "square: " << width_ << " " << height_ << endl;
    }
};

void print(Rect &rect)
{
    rect.print();
}

int main()
{
    Rect rect(10, 10);
    print(rect);

    Square square(10);
    print(square);

    return 0;
}
