#include "glm/glm.hpp"
#include "glm/vec2.hpp"
#include "glm/mat2x2.hpp"
#include "glm/gtx/string_cast.hpp"
using namespace glm;

#include <iostream>
using namespace std;

int main(void)
{
    // OpenGL is column-major, unlike Stata, which is row-major
    mat2x2 x(vec2(-4, 2), vec2(3, -5));
    vec2 y(4, 5);

    vec2 b = inverse(x) * y;

    // vec2(-5/2, -2)
    cout << glm::to_string(b) << endl;

	return 0;
}