#include "Component.h"

namespace SPlat {

    namespace Entity {

        class Behavior : public Component {

            bool enabled;

        public:

            Behavior(const size_t id, const size_t owner, const bool enabled) 
                    : Component(id, owner) {
                if (enabled) {
                    enable();
                } else {
                    disable();
                }
            }

            void enable(void) { 
                enabled = true;
                on_enable();
            }

            void disable(void) {
                enabled = false;
                on_disable();
            }

            const bool is_enabled(void) {
                return enabled;
            }

            virtual void on_enable(void) = 0;

            virtual void on_disable(void) = 0;

        };

    }

}