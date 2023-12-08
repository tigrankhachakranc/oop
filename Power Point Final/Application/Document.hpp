#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP


#include "string"

#include "Slide.hpp"

using VectorOfStrings = std::vector<std::string>;

class Document
{
private:
    std::vector<Slide> slides;

public:
    void addSlide(const Slide &slide);
    void delSlide(const Id &id);
    VectorOfStrings getSlideTitles();
    Slide getSlideById(const Id &id);
};

#endif DOCUMENT_HPP