#include <iostream>

int main() {

    // Image
    const int image_w = 256;
    const int image_h = 256;

    std::cout << "P3\n" << image_w << ' ' << image_h << "\n255\n";

    for (int j = image_h-1; j>=0; --j){
        for (int i = 0; i< image_w; ++i){

            double r = double(i) / (image_w-1);
            double g = double(j) / (image_h-1);
            double b = 0.25;

            int ir = static_cast<int>(255.999*r);
            int ig = static_cast<int>(255.999*g);
            int ib = static_cast<int>(255.999*b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';

        }
    }
}