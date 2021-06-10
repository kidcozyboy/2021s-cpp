#ifndef COLOR_H_
#define COLOR_H_

#include <sstream>


class Color {
    int red;
    int green;
    int blue;

public:
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}

    inline int getRed() const { return red; }
    inline int getGreen() const { return green; }
    inline int getBlue() const { return blue; }

    std::string str() const {
        std::stringstream ss;
        ss << "Color[" << red << ", " << green << ", " << blue << ']';
        return ss.str();
    }

};

inline std::ostream &operator<<(std::ostream &s, const Color &color) {
    return s << color.str();
}


#endif //COLOR_H_
