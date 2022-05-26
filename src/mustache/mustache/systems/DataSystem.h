#ifndef ECS_BENCHMARKS_MUSTACHE_DATASYSTEM_H_
#define ECS_BENCHMARKS_MUSTACHE_DATASYSTEM_H_

#include <mustache/ecs/ecs.hpp>

#include "base/systems/DataSystem.h"

namespace ecs::benchmarks::mustache::systems {

    class DataSystem final
            : public ::mustache::System<DataSystem>,
              ecs::benchmarks::base::systems::DataSystem<::mustache::World, float> {
    public:
        using Entity = ::mustache::Entity;

        void update(::mustache::World &world, TimeDelta dt) override;

        void onUpdate(::mustache::World &world) override;
    };

}

#endif