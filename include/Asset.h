#include <string>

namespace SPlat {

    namespace Entity {

        /// @brief resource class
        ///
        /// Asset is used to contain more complicated data, like sprites or 
        /// sounds, that either would not be appropriate to store in a 
        /// component or share copies across several game objects.
        class Asset {

        public:

            /// @brief getter for uniquely identifying tag
            /// @return tag identifying asset
            ///
            /// Every concrete implementation of Asset must define a tag, such
            /// as "sprite" or "sprite_walking" or "footsteps" or "background"
            /// or so on, so that it can be uniquely extracted from relevant 
            /// game objects.
            virtual const std::string get_tag(void) = 0;

        };

    }

}