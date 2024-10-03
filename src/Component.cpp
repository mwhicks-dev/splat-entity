#include "Component.h"

using namespace SPlat::Entity;

Component::Component(const size_t id, const size_t owner) {
    set_id(id);
    set_owner(owner);
}

void Component::set_id(const size_t id) {
    this->id = id;
}

void Component::set_owner(const size_t owner) {
    this->owner = owner;
}

const size_t Component::get_id(void) {
    return id;
}

const size_t Component::get_owner(void) {
    return owner;
}