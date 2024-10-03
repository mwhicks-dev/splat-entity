#include <string>

namespace SPlat {

    namespace Entity {

        class Component {

            size_t id;

            size_t owner;

            void set_id(const size_t);

        public:

            Component(const size_t, const size_t);

            const size_t get_id(void);

            const size_t get_owner(void);

            void set_owner(const size_t);

            virtual const std::string get_tag(void) = 0;

        };

    }

}