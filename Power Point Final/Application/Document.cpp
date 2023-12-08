#include "Document.hpp"

void Document::addSlide(const Slide &slide)
{
    slides.push_back(slide);
}

void Document::delSlide(const Id &id)
{
    slides.erase(std::remove_if(slides.begin(), slides.end(),
                                [&id](const Slide &slide)
                                { return slide.getId() == id; }),
                 slides.end());
}

VectorOfStrings Document::getSlideTitles()
{
    std::vector<std::string> titles;
    for (const auto &slide : slides)
    {
        titles.push_back(slide.getTitle());
    }
    return titles;
}

Slide Document::getSlideById(const Id &id)
{
    auto it = std::find_if(slides.begin(), slides.end(), [&id](const Slide &slide)
                           { return slide.getId() == id; });

    if (it != slides.end())
    {
        return *it;
    }
    else
    {
        return Slide();
    }
}