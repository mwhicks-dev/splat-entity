#include "GameObjectBuilder.h"

namespace SPlat {

    namespace Entity {

        class AbstractGameObjectFactory {

            GameObjectBuilder builder;

        public:

            virtual GameObject* manufacture(size_t) = 0;

        };

    }

}