#ifndef SPlat_Entity_EntityTracker
#define SPlat_Entity_EntityTracker

#include "GameObject.h"
#include "MonoBehavior.h"

#include <vector>

namespace SPlat {

    namespace Entity {

        /// @brief Singleton internal tracker used by Application Layer 
        ///
        /// The EntityTracker keeps track of relevant Entity Layer objects that
        /// are used by the Application Layer, currently including instances 
        /// of GameObject (accessed by ID) and instances of MonoBehavior
        /// (accessed in the form a vector).
        ///
        /// GameObject querying is useful for Components that need to locate 
        /// other interrelated Components attached to the same GameObject.
        ///
        /// MonoBehavior querying is useful because they must be ran every 
        /// frame by the higher layers.
        class EntityTracker {

            /// @brief index map of GameObjects
            std::unordered_map<size_t, GameObject*> game_objects;

            /// @brief index map of MonoBehaviors
            std::unordered_map<size_t, MonoBehavior*> mono_behaviors;

            /// @brief private Singleton constructor
            EntityTracker();

        public:

            /// @brief adds a GameObject to the index map
            /// @param obj the GameObject to add
            /// @throws std::invalid_argument if GameObject already tracked
            void add_game_object(GameObject&);

            /// @brief retrieves a GameObject by ID, if a match exists
            /// @param id the unique ID of the GameObject
            /// @return the GameObject, or a null pointer
            GameObject* get_game_object(size_t);

            /// @brief removes a GameObject by ID
            /// @param id the unique ID of the GameObject
            void remove_game_object(size_t);

            /// @brief adds a MonoBehavior to the index map
            /// @param obj the MonoBehavior to add
            /// @throws std::invalid_argument if MonoBehavior already tracked
            void add_mono_behavior(MonoBehavior&);

            /// @brief retrieves a vector containing all tracked MonoBehaviors
            /// @return vector of pointers to MonoBehaviors
            std::vector<MonoBehavior*> get_mono_behaviors(void);

            /// @brief removes a MonoBehavior by ID
            /// @param id the unique ID of the MonoBehavior
            void remove_mono_behavior(size_t);

            /// @brief public static Singleton getter
            /// @return the strack instance of EntityTracker
            static EntityTracker& get_instance(void);

        };

    }

}

#endif