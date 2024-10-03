#include <string>

namespace SPlat {

    namespace Entity {

        /// @brief base component class
        ///
        /// Implementations of the Component calss are meant to store data 
        /// relevant to the GameObject they are owned by.
        ///
        /// Component has two abstract descendants natively: Behavior, which is
        /// a Component that can be enabled or disabled, and MonoBehavior, 
        /// which is a Behavior that, when enabled, performs some action on 
        /// every iteration of the engine.
        ///
        /// @see GameObject
        /// @see Behavior
        /// @see MonoBehavior
        class Component {

            /// @brief unique ID of a component
            size_t id;

            /// @brief the ID of the GameObject owning this Component
            ///
            /// @see GameObject
            size_t owner;

            /// @brief private setter for Component ID
            /// @param id unique ID of component
            void set_id(const size_t);

        public:

            /// @brief simple Component constructor with required state
            /// @param id unique ID of component
            /// @param owner ID of the owning GameObject
            Component(const size_t, const size_t);

            /// @brief getter for unique Component ID 
            /// @return ID of component
            const size_t get_id(void);

            /// @brief getter for owner of Component 
            /// @return ID of owner
            const size_t get_owner(void);

            /// @brief setter for owner of Component
            /// @param id ID of owner
            void set_owner(const size_t);

            /// @brief getter for uniquely identifying tag
            /// @return tag identifying component
            ///
            /// Every concrete implementation of Component must define a tag,
            /// such as "inventory" or "walking", so that it can be retrieved 
            /// from the relevant GameObjects and related components.
            virtual const std::string get_tag(void) = 0;

        };

    }

}