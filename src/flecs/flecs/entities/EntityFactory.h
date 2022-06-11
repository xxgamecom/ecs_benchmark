#ifndef ECS_BENCHMARKS_FLECS_ENTITYFACTORY_H_
#define ECS_BENCHMARKS_FLECS_ENTITYFACTORY_H_

#include "flecs/custom_flecs.h"

#include "base/entities/EntityFactory.h"
#include "base/components/PositionComponent.h"
#include "base/components/VelocityComponent.h"
#include "base/components/DataComponent.h"

namespace ecs::benchmarks::flecs::entities {

    class EntityFactory {
    public:
        using EntityManager = ::flecs::world;
        using Entity = ::flecs::entity;

        static auto create(EntityManager &entities) {
            return entities.entity()
                    .add<ecs::benchmarks::base::components::PositionComponent>()
                    .add<ecs::benchmarks::base::components::VelocityComponent>()
                    .add<ecs::benchmarks::base::components::DataComponent>();
        }

        static void createBulk(EntityManager &entities, std::vector<Entity> &out);

        static auto createMinimal(EntityManager &entities) {
            return entities.entity()
                    .add<ecs::benchmarks::base::components::PositionComponent>()
                    .add<ecs::benchmarks::base::components::VelocityComponent>();
        }

        static void createMinimalBulk(EntityManager &entities, std::vector<Entity> &out);

        static void destroy(EntityManager &entities, Entity entity);

        static void destroyBulk(EntityManager &entities, std::vector<Entity> &in);

        static void clear(EntityManager &entities);


        [[nodiscard]] static inline const ecs::benchmarks::base::components::PositionComponent &
        getComponentOneConst(EntityManager &/*entities*/, Entity entity) {
            return *entity.get<ecs::benchmarks::base::components::PositionComponent>();
        }

        [[nodiscard]] static inline const ecs::benchmarks::base::components::VelocityComponent &
        getComponentTwoConst(EntityManager &/*entities*/, Entity entity) {
            return *entity.get<ecs::benchmarks::base::components::VelocityComponent>();
        }

        [[nodiscard]] static inline ecs::benchmarks::base::components::PositionComponent &
        getComponentOne(EntityManager &/*entities*/, Entity entity) {
            return *entity.get_mut<ecs::benchmarks::base::components::PositionComponent>();
        }

        [[nodiscard]] static inline ecs::benchmarks::base::components::VelocityComponent &
        getComponentTwo(EntityManager &/*entities*/, Entity entity) {
            return *entity.get_mut<ecs::benchmarks::base::components::VelocityComponent>();
        }

        [[nodiscard]] static inline ecs::benchmarks::base::components::DataComponent *
        getOptionalComponentThree(EntityManager &/*entities*/, Entity entity) {
            return entity.get_mut<ecs::benchmarks::base::components::DataComponent>();
        }


        static inline auto &removeComponentOne(EntityManager & /*entities*/, Entity entity) {
            return entity.remove<ecs::benchmarks::base::components::PositionComponent>();
        }

        static inline auto &removeComponentTwo(EntityManager & /*entities*/, Entity entity) {
            return entity.remove<ecs::benchmarks::base::components::VelocityComponent>();
        }

        static inline auto &removeComponentThree(EntityManager & /*entities*/, Entity entity) {
            return entity.remove<ecs::benchmarks::base::components::DataComponent>();
        }

        static inline auto &addComponentOne(EntityManager & /*entities*/, Entity entity) {
            return entity.add<ecs::benchmarks::base::components::PositionComponent>();
        }
    };

}

#endif