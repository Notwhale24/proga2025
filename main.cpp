#include "struct.h"
#include "funcs.h"

int main() {

    Point point;
    Circle circle1, circle2;
    Rectangle rectangle1, rectangle2;

    double x_p, y_p;
    double x_c1, y_c1, r1;
    double x_c2, y_c2, r2;
    double x_r1, y_r1, s1;
    double x_r2, y_r2, s2;

    cout << "Введите координаты точки (x y): ";
    cin >> x_p >> y_p;
    point.set_point(x_p, y_p);

    cout << "Введите центр первой окружности (x y): ";
    cin >> x_c1 >> y_c1;
    cout << "Введите радиус первой окружности: ";
    cin >> r1;
    circle1.set_circle(x_c1, y_c1, r1);

    cout << "Введите центр второй окружности (x y): ";
    cin >> x_c2 >> y_c2;
    cout << "Введите радиус второй окружности: ";
    cin >> r2;
    circle2.set_circle(x_c2, y_c2, r2);

    cout << "Введите левый верхний угол первого квадрата (x y): ";
    cin >> x_r1 >> y_r1;
    cout << "Введите длину стороны первого квадрата: ";
    cin >> s1;
    rectangle1.set_rectangle(x_r1, y_r1, s1);

    cout << "Введите левый верхний угол второго квадрата (x y): ";
    cin >> x_r2 >> y_r2;
    cout << "Введите длину стороны второго квадрата: ";
    cin >> s2;
    rectangle2.set_rectangle(x_r2, y_r2, s2);

    cout << endl;

    if (point_in_circle(point, circle1))
        cout << "Точка находится внутри Окружности1\n";
    else
        cout << "Точка НЕ находится внутри Окружности1\n";

    if (point_in_rectangle(point, rectangle1))
        cout << "Точка находится внутри Квадрата1\n";
    else
        cout << "Точка НЕ находится внутри Квадрата1\n";

    if (point_on_circle(point, circle1))
        cout << "Точка находится на границе Окружности1\n";
    else
        cout << "Точка НЕ находится на границе Окружности1\n";

    if (point_on_rectangle(point, rectangle1))
        cout << "Точка находится на границе Квадрата1\n";
    else
        cout << "Точка НЕ находится на границе Квадрата1\n";

    cout << endl;

    if (circles_intersect(circle1, circle2))
        cout << "Окружность1 и Окружность2 пересекаются\n";
    else
        cout << "Окружность1 и Окружность2 НЕ пересекаются\n";

    if (rectangles_intersect(rectangle1, rectangle2))
        cout << "Квадрат1 и Квадрат2 пересекаются\n";
    else
        cout << "Квадрат1 и Квадрат2 НЕ пересекаются\n";

    if (circle_rectangle_intersect(circle1, rectangle1))
        cout << "Окружность1 и Квадрат1 пересекаются\n";
    else
        cout << "Окружность1 и Квадрат1 НЕ пересекаются\n";

    cout << endl;

    if (circle_in_circle(circle1, circle2))
        cout << "Окружность1 находится внутри Окружности2\n";
    else
        cout << "Окружность1 НЕ находится внутри Окружности2\n";

    if (rectangle_in_rectangle(rectangle1, rectangle2))
        cout << "Квадрат1 находится внутри Квадрата2\n";
    else
        cout << "Квадрат1 НЕ находится внутри Квадрата2\n";

    if (rectangle_in_circle(rectangle1, circle1))
        cout << "Квадрат1 находится внутри Окружности1\n";
    else
        cout << "Квадрат1 НЕ находится внутри Окружности1\n";

    if (circle_in_rectangle(circle1, rectangle1))
        cout << "Окружность1 находится внутри Квадрата1\n";
    else
        cout << "Окружность1 НЕ находится внутри Квадрата1\n";

    return 0;
}