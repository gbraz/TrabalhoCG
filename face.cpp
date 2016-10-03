#include "face.h"

Face::Face()
{

}

Face::Face(std::vector<double> v1, std::vector<double> v2, std::vector<double> v3)
{
    vertices.push_back(v1);
    vertices.push_back(v2);
    vertices.push_back(v3);


}
