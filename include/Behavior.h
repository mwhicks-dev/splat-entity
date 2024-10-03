#include "Component.h"

namespace SPlat {

    namespace Entity {

        class Behavior : public Component {

            bool enabled;

        public:

            Behavior(const size_t, const size_t, const bool);

            void enable(void);

            void disable(void);

            const bool is_enabled(void);

            virtual void on_enable(void) = 0;

            virtual void on_disable(void) = 0;

        };

    }

}