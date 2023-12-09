#include "Director.hpp"

Director::Director() : currentIndex(-1) {}

void Director::undo() {
    if (currentIndex >= 0) {
        actions[currentIndex].undo();
        currentIndex--;
    }
}

void Director::redo() {
    if (currentIndex < static_cast<int>(actions.size()) - 1) {
        currentIndex++;
        actions[currentIndex].exec();
    }
}

void Director::add(Action action) {
    actions.resize(currentIndex + 1); // TK: resize not needed, push_back also resizes the vector, you will get double sized vector
    currentIndex++;
    actions.push_back(action); 
    action.exec();
}
