#ifndef ECS_BENCHMARKS_ENTT_RUNTIMEMOVEMENTSYSTEM_H_
#define ECS_BENCHMARKS_ENTT_RUNTIMEMOVEMENTSYSTEM_H_

#include "entt/entt.h"

#include "base/systems/MovementSystem.h"

namespace ecs::benchmarks::entt::systems {

    class RuntimeMovementSystem final : public ecs::benchmarks::base::systems::MovementSystem<::entt::registry, float> {
    public:
        void init(EntityManager& entities) override;

        void update(EntityManager &registry, TimeDelta dt) override;

    private:
        ::entt::runtime_view m_view{};
    };

}

#endif