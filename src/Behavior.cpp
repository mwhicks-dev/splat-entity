#include "Behavior.h"

using namespace SPlat::Entity;

Behavior::Behavior(const size_t id, const size_t owner, 
        const bool enabled)
        : Component(id, owner) {
    if (enabled) {
        enable();
    } else {
        disable();
    }
}

void Behavior::enable(void) { 
    enabled = true;
    on_enable();
}

void Behavior::disable(void) {
    enabled = false;
    on_disable();
}

const bool Behavior::is_enabled(void) {
    return enabled;
}