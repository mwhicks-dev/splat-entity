#include "GameObject.h"

namespace SPlat {

    namespace Entity {

        class GameObjectBuilder {

            GameObject * current = nullptr;

        public:

            void initialize(size_t id) {
                if (current != nullptr)
                    delete current;
                
                current = new GameObject(id);
            }

            void add_component(Component& component) {
                if (current == nullptr)
                    return;
                
                current->add_component(component);
                component.set_owner(current->get_id());
            }

            void add_asset(Asset& asset) {
                if (current == nullptr)
                    return;
                
                current->add_asset(asset);
            }

            GameObject* get_game_object(void) {
                GameObject* tmp = current;
                current = nullptr;
                return tmp;
            }

        };

    }

}