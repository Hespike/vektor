#include <cmath>

class Vector3 {
public:
    double x;
    double y;
    double z;

    Vector3(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    Vector3 operator+(const Vector3& other) const {
        Vector3 result = *this;
        result.x += other.x;
        result.y += other.y;
        result.z += other.z;
        return result;
    }

    Vector3 operator-(const Vector3& other) const {
        Vector3 result = *this;
        result.x -= other.x;
        result.y -= other.y;
        result.z -= other.z;
        return result;
    }

    Vector3 operator*(double number) const {
        Vector3 result = *this;
        result.x *= number;
        result.y *= number;
        result.z *= number;
        return result;
    }

    Vector3 operator/(double number) const {
        Vector3 result = *this;
        result.x /= number;
        result.y /= number;
        result.z /= number;
        return result;
        }

        bool operator!=(const Vector3& other) const {
            return !(*this == other);
        }

        bool operator==(const Vector3& other) const {
            return this->x == other.x && this->y == other.y && this->z == other.z;
        }

        double operator[](unsigned int index) const {
            switch (index) {
                case 0:
                    return x;
                case 1:
                    return y;
                case 2:
                    return z;
                default:
                    return 0;
            }
        }

        double sqrMagnitude() const{
            return x*x+y*y+z*z;
        }

        double magnitude() const {
        return sqrt(sqrMagnitude());
    }
};
