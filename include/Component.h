#include <string>

namespace SPlat {

    namespace Entity {

        class Component {

            size_t id;

            size_t owner;

        public:

            Component(const size_t id, const size_t owner) {
                this->id = id;
                this->owner = owner;
            }

            const size_t get_id(void) { return id; }

            const size_t get_owner(void) { return owner; }

            void set_owner(const size_t id) { this->id = id; }

            virtual const std::string get_tag(void) = 0;

        };

    }

}