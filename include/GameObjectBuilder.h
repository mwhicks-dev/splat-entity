#include "GameObject.h"

namespace SPlat {

    namespace Entity {

        /// @brief builder class for GameObject instances
        ///
        /// This Builder pattern is used by AbstractGameObjetFactory 
        /// implementations in order to simplify the creational process down 
        /// to exclusively what is different about the game objects.
        ///
        /// @see AbstractGameObjectFactory
        class GameObjectBuilder {

            /// @brief pointer to current GameObject instance
            ///
            /// This pointer contains the life cycle of GameObject creation.
            /// The GameObjectBuilder is designed to run safely if a GameObject
            /// is "built" without being created, but if this happens, a null 
            /// pointer will be returned.
            GameObject * current = nullptr;

        public:

            /// @brief 
            /// @param id the ID of the new GameObject
            void initialize(const size_t);

            void add_component(Component&);

            void add_asset(Asset&);

            GameObject* get_game_object(void);

        };

    }

}