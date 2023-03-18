#include <iostream>
using namespace std;

// herança

class Rect
{
private:
    int width_ = 0;
    int height_ = 0;

public:
    Rect(int w, int h) : width_{w}, height_{h} {}

    int width() const { return width_; }
    int height() const { return height_; }
};

class Square : public Rect
{
public:
    explicit Square(int size) : Rect(size, size) {}
};

int main()
{
    Square square(10);

    cout << "rect: " << square.width() << " " << square.height() << endl;
    return 0;
}
