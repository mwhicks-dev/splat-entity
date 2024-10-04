#ifndef SPlat_Entity_MonoBehavior
#define SPlat_Entity_MonoBehavior

#include "Behavior.h"

namespace SPlat {

    namespace Entity {

        /// @brief MonoBehavior component class
        ///
        /// Implementations of the MonoBehavior class include any Behavior that
        /// repeats its behavior on every frame of the engine where it is 
        /// enabled.
        ///
        /// MonoBehavior's parent, Behavior, is responsible for allowing a 
        /// MonoBehavior to be enabled and disabled.
        /// 
        /// MonoBehavior's grandparent, Component, is intended for simple data 
        /// storage and lacks dynamic behavior on its own.
        ///
        /// @see Behavior
        /// @see Component
        class MonoBehavior : public Behavior {

        public:

            /// @brief simple MonoBehavior constructor with required state
            /// @param id unique ID of behavior
            /// @param owner ID of the owning GameObject
            /// @param enabled flag indicating if enabled
            MonoBehavior(const size_t, const size_t, const bool);

            /// @brief function ran on every enabled frame of instance 
            virtual void update(void) = 0;

        };

    }

}

#endif