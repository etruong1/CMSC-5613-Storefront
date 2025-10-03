#include <Size.h>

Size::Size(std::string sizeName, int sizeQuantity) {
    this->sizeName = sizeName;
    this->sizeQuantity = sizeQuantity;
}

int Size::getSizeQuantity() {
    return this->sizeQuantity;
}