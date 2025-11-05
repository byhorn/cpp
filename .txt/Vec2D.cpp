// but if you want to make a class that dont contains much of methods or privates use 'struct' and dont inherit
// for example Vec2, Matrix4x4

struct Vec2D {
	float x, y;
	operator void + { }
}
