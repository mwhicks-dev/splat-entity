#include "GameObjectBuilder.h"

namespace SPlat {

    namespace Entity {

        /// @brief Abstract factory class to create GameObjects
        ///
        /// Abstract wrapper for GameObject creation. Even though GameObject
        /// is not subclassable, each concrete GameObjectFactory has its own 
        /// builder used to add varying combinations of components and assets.
        class AbstractGameObjectFactory {

        protected:

            /// @brief builder used to construct GameObjects
            ///
            /// @see GameObjectBuilder
            GameObjectBuilder builder;

        public:

            /// @brief function that builds a new GameObject prototype
            /// @param id the ID of the GameObject to create
            /// @return newly constructed GameObject
            ///
            /// Uses the GameObjectFactory's builder to initialize a new 
            /// GameObject with the passed ID and then add a preselected 
            /// combination of asset and component objects to it
            ///
            /// @see GameObject
            virtual GameObject* manufacture(size_t) = 0;

        };

    }

}