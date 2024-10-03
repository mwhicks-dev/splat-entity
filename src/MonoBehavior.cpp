#include "MonoBehavior.h"

using namespace SPlat::Entity;

MonoBehavior::MonoBehavior(const size_t id, const size_t owner, 
        const bool enabled) : Behavior(id, owner, enabled) {}