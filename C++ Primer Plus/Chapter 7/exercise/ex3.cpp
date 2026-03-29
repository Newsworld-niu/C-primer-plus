#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display_box(const box ar);
void set_volume_box(box * ar);

int main()
{
    box box1 = {"Newsworld", 1.4f, 2.6f, 3.9f, 0.0f};
    box * pt = &box1;
    set_volume_box(pt);
    display_box(box1);
    return 0;
}

void display_box(const box ar)
{
    std::cout << "maker: " << ar.maker << std::endl;
    std::cout << "height: " << ar.height << std::endl;
    std::cout << "width: " << ar.width << std::endl;
    std::cout << "length: " << ar.length << std::endl;
    std::cout << "volume: " << ar.volume << std::endl;
}

void set_volume_box(box * ar)
{
    ar->volume = (ar->height) * (ar->length) * (ar->width); 
}