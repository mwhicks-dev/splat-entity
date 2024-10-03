#include "GameObject.h"

using namespace SPlat::Entity;

GameObject::GameObject(const size_t id) { set_id(id); }

void GameObject::set_id(const size_t id) { this->id = id; }

const size_t GameObject::get_id(void) { return id; }

void GameObject::add_component(Component& c) { components[c.get_tag()] = &c; }

void GameObject::remove_component(std::string tag) {
    if (components.count(tag) == 0)
        return;
    
    components.erase(tag);
}

void GameObject::add_asset(Asset& a) { assets[a.get_tag()] = &a; }

void GameObject::remove_asset(std::string tag) {
    if (assets.count(tag) == 0)
        return;
    
    assets.erase(tag);
}