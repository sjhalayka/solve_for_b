// Include GLM library headers
#include "glm/glm.hpp"
#include "glm/vec2.hpp"
#include "glm/mat2x2.hpp"
#include "glm/gtx/string_cast.hpp"

// Use all functionality in the glm namespace
// e.g. mat2x2, vec2, to_string, etc.
using namespace glm;

// Include output stream standard library header
#include <iostream>

// Use all functionality in the std (standard) library
// e.g. cout, endl, etc.
using namespace std;

// main() function definition
// e.g. take no input parameters, return an integer
int main(void)
{
    // OpenGL is column-major, unlike Stata, which is row-major
    // This means that each vec2 defines a column, not a row
    mat2x2 X(vec2(-4, 2), vec2(3, -5));
    vec2 y(4, 5);

    vec2 b = inverse(X) * y;

    // vec2(-5/2, -2)
    cout << to_string(b) << endl;

    // Return an integer
    return 0;
}