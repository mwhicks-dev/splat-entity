#include "GameObjectBuilder.h"

using namespace SPlat::Entity;

void GameObjectBuilder::initialize(const size_t id) {
    if (current != nullptr) 
        delete current;
    
    current = new GameObject(id);
}

void GameObjectBuilder::add_component(Component& c) {
    if (current == nullptr)
        return;
    
    current->add_component(c);
    c.set_owner(current->get_id());
}

void GameObjectBuilder::add_asset(Asset& a) {
    if (current == nullptr)
        return;
    
    current->add_asset(a);
}

GameObject* GameObjectBuilder::get_game_object(void) {
    GameObject* tmp = current;
    current = nullptr;
    return tmp;
}