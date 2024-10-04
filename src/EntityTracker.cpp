#include "EntityTracker.h"

#include <stdexcept>
#include <sstream>

using namespace SPlat::Entity;

void EntityTracker::add_game_object(GameObject& obj) {
    // input validation
    size_t id = obj.get_id();
    if (game_objects.count(id) > 0) {
        std::stringstream ss;
        ss << "GameObject with ID "
            << id
            << " already defined";
        throw std::invalid_argument(ss.str());
    }

    game_objects[id] = &obj;
}

GameObject* EntityTracker::get_game_object(size_t id) {
    GameObject* obj = nullptr;
    if (game_objects.count(id) > 0)
        obj = game_objects[id];
    return obj;
}

void EntityTracker::remove_game_object(size_t id) {
    if (game_objects.count(id) > 0)
        game_objects.erase(id);
}

void EntityTracker::add_mono_behavior(MonoBehavior& obj) {
    // input validation
    size_t id = obj.get_id();
    if (mono_behaviors.count(id) > 0) {
        std::stringstream ss;
        ss << "MonoBehavior with ID "
            << id
            << " already defined";
        throw std::invalid_argument(ss.str());
    }

    mono_behaviors[id] = &obj;
}

std::vector<MonoBehavior*> EntityTracker::get_mono_behaviors(void) {
    std::vector<MonoBehavior*> res;
    std::vector<size_t> bad_ids;

    // construct list of MonoBehavior pointers
    for (std::pair<size_t, MonoBehavior*> pair : mono_behaviors) {
        if (pair.second == nullptr) {
            bad_ids.push_back(pair.first);
            continue;
        }
        res.push_back(pair.second);
    }

    // remove IDs that are no longer valid, if any
    for (size_t id : bad_ids)
        mono_behaviors.erase(id);

    return res;
}

void EntityTracker::remove_mono_behavior(size_t id) {
    if (mono_behaviors.count(id) > 0)
        mono_behaviors.erase(id);
}

EntityTracker& EntityTracker::get_instance(void) {
    static EntityTracker instance;
    return instance;
}