#include "Component.h"
#include "Asset.h"

#include <unordered_map>

namespace SPlat {

    namespace Entity {

        class GameObject {

            size_t id;

            std::unordered_map<std::string, Component&> components;

            std::unordered_map<std::string, Asset&> assets;

            void set_id(const size_t);

        public:

            GameObject(const size_t);

            const size_t get_id(void);

            void add_component(Component&);

            Component* get_component(std::string);

            void remove_component(std::string);

            void add_asset(Asset&);

            Asset* get_asset(std::string);

            void remove_asset(std::string);

        };

    }

}