#include <string>

namespace SPlat {

    namespace Entity {

        class Asset {

        public:

            virtual const std::string get_tag(void) = 0;

        };

    }

}