#include "Behavior.h"

namespace SPlat {

    namespace Entity {

        class MonoBehavior : public Behavior {

        public:

            MonoBehavior(const size_t id, const size_t owner, 
                    const bool enabled) : Behavior(id, owner, enabled) {}

            virtual void update(void) = 0;

        };

    }

}