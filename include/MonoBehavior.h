#include "Behavior.h"

namespace SPlat {

    namespace Entity {

        class MonoBehavior : public Behavior {

        public:

            MonoBehavior(const size_t, const size_t, const bool);

            virtual void update(void) = 0;

        };

    }

}