#include "Component.h"
#include "Asset.h"

#include <unordered_map>

namespace SPlat {

    namespace Entity {

        class GameObject {

            size_t id;

            std::unordered_map<std::string, Component&> components;

            std::unordered_map<std::string, Asset&> assets;

        public:

            GameObject(size_t id) { this->id = id; }

            const size_t get_id(void) { return id; }

            void add_component(Component& component) { 
                components[component.get_tag()] = component;
            }

            Component* get_component(std::string tag) {
                return components.count(tag) == 0
                        ? nullptr
                        : &components[tag];
            }

            void remove_component(std::string tag) {
                if (components.count(tag) == 0)
                    return;
                
                components.erase(tag);
            }

            void add_asset(Asset& asset) {
                assets[asset.get_tag()] = asset;
            }

            Asset* get_asset(std::string tag) {
                return assets.count(tag) == 0
                        ? nullptr
                        : &assets[tag];
            }

            void remove_asset(std::string tag) {
                if (assets.count(tag) == 0)
                    return;
                
                assets.erase(tag);
            }

        };

    }

}