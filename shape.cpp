#include <iostream>
using namespace std;

// herança

class Rect
{
protected:
    int width_ = 0;
    int height_ = 0;

public:
    Rect(int w, int h) : width_{w}, height_{h} {}

    int width() const { return width_; }
    int height() const { return height_; }

    virtual void print() const
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

int main()
{
    Square square(10);
    square.print();

    Rect& rect_ref = square;
    rect_ref.print();

    return 0;
}
