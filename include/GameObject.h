#ifndef SPlat_Entity_GameObject
#define SPlat_Entity_GameObject

#include "Component.h"
#include "Asset.h"

#include <unordered_map>

namespace SPlat {

    namespace Entity {

        /// @brief game object representation
        ///
        /// This GameObject class joins together Component and Asset 
        /// implementations in order to make a real, operative piece of data.
        ///
        /// @see Component
        /// @see Asset
        class GameObject {

            /// @brief unique ID of the GameObject
            size_t id;

            /// @brief map of component tag to components (via pointer)
            std::unordered_map<std::string, Component*> components;

            /// @brief map of asset tags to assets (via pointer)
            std::unordered_map<std::string, Asset*> assets;

            /// @brief private setter for ID; should only be set once
            /// @param id unique GameObject ID
            void set_id(const size_t);

        public:

            /// @brief constructor requiring GameObject ID
            /// @param id unique GameObject ID
            GameObject(const size_t);

            /// @brief public getter for ID 
            /// @return unique GameObject ID
            const size_t get_id(void);

            /// @brief adds a new component to this GameObject
            /// @param c reference of new component to add
            ///
            /// @see Component
            void add_component(Component&);

            /// @brief retrieves a component by its tag
            /// @tparam T type of asset to return
            /// @param tag uniquely identifying tag provided by component
            /// @return component with matching tag, or a null pointer
            ///
            /// @see Component::get_tag(void)
            template <class T>
            T* get_component(std::string tag) {
                return components.count(tag) == 0
                        ? nullptr
                        : dynamic_cast<T*>(components[tag]);
            }

            /// @brief removes a component by its tag
            /// @param tag uniquely identifying tag provided by component
            ///
            /// @see Component::get_tag(void)
            void remove_component(std::string);

            /// @brief adds a new asset to this GameObject
            /// @param a refernce of a new asset to add
            ///
            // @see Asset
            void add_asset(Asset&);

            /// @brief retrieves an asset by its tag
            /// @tparam T type of asset to return
            /// @param tag uniquely identifying tag provided by an asset
            /// @return asset with matching tag, or a null pointer
            ///
            /// @see Asset::get_tag(void)
            template <class T>
            T* get_asset(std::string tag) {
                return assets.count(tag) == 0
                        ? nullptr
                        : dynamic_cast<T*>(assets[tag]);
            }

            /// @brief removes an asset by its tag
            /// @param tag uniquely identifying tag provided by component
            void remove_asset(std::string);

        };

    }

}

#endif