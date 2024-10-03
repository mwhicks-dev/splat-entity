#include "GameObject.h"

namespace SPlat {

    namespace Entity {

        class GameObjectBuilder {

            GameObject * current = nullptr;

        public:

            void initialize(const size_t);

            void add_component(Component&);

            void add_asset(Asset&);

            GameObject* get_game_object(void);

        };

    }

}