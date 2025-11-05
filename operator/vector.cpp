
class Vector {
public:
	int x, y;
	Vector(int x, int y): x(x), y(y) {}
	Vector operator + (const Vector & other) const { return Vector(this->x + other.x, this->y + other.y); }
	double operator * (const Vector & other) const { return (this->x * other.x) + (this->y * other.y); }
};

int main(void) {

	Vector l(3, 4), r(1, 2);
	
	Vector v = l + r;						std::cout << v.x << " " << v.y << std::endl;
	double s = l * r;						std::cout << s << std::endl;

	return 0;
}
