// struct class differs only in accessiblity
// no differece between struct vs class
// struct exists only to be compatible with c code
// c++ is now completely diverged from c
// c++ wanted to be compatible with c
// c++ wanted to keep legacy from c
// bjarmin stroustrup wanted this
// but didnt work out
// so dont use struct

// but if you want to make a class that dont contains much of methods or privates use 'struct' and dont inherit
// for example Vec2, Matrix4x4

struct Vec2D
{
    float x, y;
    
    operator void + {
        
    }
}