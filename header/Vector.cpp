
Vector::Vector(int x, int y) : x(x), y(y) {}

Vector Vector::operator + (const Vector & other) const {
	return Vector(this->x + other.x, this->y + other.y);
}
