#ifndef FACE_H
#define FACE_H

#include <vector>

class Face
{
public:
    std::vector< std::vector<double> > vertices;
    std::vector<double> normal;

    Face();
    Face(std::vector<double>, std::vector<double>, std::vector<double>);
};

#endif // FACE_H
