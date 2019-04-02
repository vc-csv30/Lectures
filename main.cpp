#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

struct Spell {

};

class Avatar {
public:
    void move(double tx, double ty);
    bool castSpell(Spell s);
    void kill() { alive = false; }
    bool isAlive() { return alive; }
    void respawn(double newX, double newY) {
        health = 100;
        alive = true;
        x = newX;
        y = newY;
    }
private:
    double x;
    double y;
    int spellLevel;
    int health;
    bool alive;
};

class Elf: public Avatar {

};

struct Point {
private:
    double x;
    double y;
};

class Shape {
  double x;
  double y;

public:
    Shape() {
        x = y = 0;
    }

    Shape(double x, double y) {
        setX(x);
        setY(y);
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    void translate(double tx, double ty) {
        setX(x + tx);
        setY(y + ty);
    }

    void scale(double sx, double sy) {
        setX(x * sx);
        setY(y * sy);
    }

    void scale(double s) {
        scale(s, s);
    }


protected:
    void setX(double newX) {
        if (newX >= 0.0  && newX <= 40.0) {
            x = newX;
        }
    }

    void setY(double newY) {
        if (newY >= 0.0 && newY <= 40.0) {
            y = newY;
        }
    }
};

class Circle: public Shape {
    double radius;

public:
    Circle(double rad) {
        radius = rad;
    }

    Circle(double x, double y, double rad) {
        radius = rad;
        setX(x);
        setY(y);
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return M_PI * radius * radius;
    }
};

using namespace std;

int main(){
    // Alias for char
    uint8_t i = 32;

    while(0) {
        std::cout << "cs" << (' ') << "v30" << std::endl;
    }

    int x = 3, y = 77778;
    if (x % 2 && y % 2) {
        cout << "Both are odd" << std::endl;
    }

    return 0;
}
