#ifndef SPlat_Entity_Behavior
#define SPlat_Entity_Behavior

#include "Component.h"

namespace SPlat {

    namespace Entity {

        /// @brief Behavior component class
        ///
        /// Implementations of the Behavior class include any Component that 
        /// can be enabled or disabled.
        ///
        /// Behavior's parent, Component, is intended for simple data storage 
        /// and lacks dynamic behavior on its own.
        ///
        /// Behavior's child, MonoBehavior, is a Behavior that when enabled 
        /// runs some behavior on every iteration of the engine.
        ///
        /// @see Component
        /// @see MonoBehavior
        class Behavior : public Component {

            /// @brief flag indicating if behavior is enabled or not
            bool enabled;

        public:

            /// @brief simple Behavior constructor with required state
            /// @param id unique ID of behavior
            /// @param owner ID of the owning GameObject
            /// @param enabled flag indicating if enabled
            Behavior(const size_t, const size_t, const bool);

            /// @brief sets Behavior to enabled
            void enable(void);

            /// @brief sets Behavior to disabled
            void disable(void);

            /// @brief getter for enabled flag 
            /// @return true if Behavior enabled, false otherwise
            const bool is_enabled(void);

            /// @brief function called in conjunction with Behavior::enable
            virtual void on_enable(void) = 0;

            /// @brief function called in conjunction with Behavior::disable 
            virtual void on_disable(void) = 0;

        };

    }

}

#endif