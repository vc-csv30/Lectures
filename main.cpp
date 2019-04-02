#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

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

    std::vector<int> values;
    values.reserve(100);

    srandom(time(nullptr));
    for (int i = 0; i < 100; i++) {
        values.push_back(random() % 102 + 18);
    }

    int sum = 0;
    for (int h = 0; h < values.size(); h++) {
        std::cout << "age: " << values[h] << std::endl;
        sum += values[h];
    }
    double average = static_cast<double>(sum) / values.size();

    std::cout << "Average: " << average << std::endl;
    std::cout << "Size: " << values.size() << std::endl;
    std::cout << "Capacity: " << values.capacity() << std::endl;

    return 0;
}
