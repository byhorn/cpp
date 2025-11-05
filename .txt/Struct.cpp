
struct MyStruct {
	int x;        // public by default
	void func();  // public by default
private:
	int y;        // explicitly private
};

struct BaseS { };
struct DerivedS : BaseS { };  // public inheritance
