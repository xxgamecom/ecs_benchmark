#include "EnttBenchmark.h"

static ecs::benchmarks::entt::EnttBenchmark entt_benchmark({
                                                                   .version = ENTT_VERSION
                                                           });

static void BM_entt_CreateEntities(benchmark::State &state) {
    entt_benchmark.BM_CreateEntities(state);
}

BENCHMARK(BM_entt_CreateEntities)
        ->Arg(10)
        ->Arg(25)
        ->Arg(50)
        ->Arg(100)
        ->Arg(200)
        ->Arg(400)
        ->Arg(800)
        ->Arg(1600)
        ->Arg(3200)
        ->Arg(5000)
        ->Arg(10'000)
        ->Arg(30'000)
        ->Arg(50'000)
        ->Arg(100'000)
        ->Arg(300'000)
        ->Arg(500'000)
        ->Arg(700'000)
        ->Arg(1'000'000);


static void BM_entt_DestroyEntities(benchmark::State &state) {
    entt_benchmark.BM_DestroyEntities(state);
}

BENCHMARK(BM_entt_DestroyEntities)
        ->Arg(10)
        ->Arg(25)
        ->Arg(50)
        ->Arg(100)
        ->Arg(200)
        ->Arg(400)
        ->Arg(800)
        ->Arg(1600)
        ->Arg(3200)
        ->Arg(5000)
        ->Arg(10'000)
        ->Arg(30'000)
        ->Arg(50'000)
        ->Arg(100'000)
        ->Arg(300'000)
        ->Arg(500'000);


static void BM_entt_UnpackOneComponent(benchmark::State &state) {
    entt_benchmark.BM_UnpackOneComponent(state);
}

BENCHMARK(BM_entt_UnpackOneComponent)
        ->Arg(10)
        ->Arg(25)
        ->Arg(50)
        ->Arg(100)
        ->Arg(200)
        ->Arg(400)
        ->Arg(800)
        ->Arg(1600)
        ->Arg(3200)
        ->Arg(5000)
        ->Arg(10'000)
        ->Arg(30'000)
        ->Arg(50'000)
        ->Arg(100'000)
        ->Arg(300'000)
        ->Arg(500'000)
        ->Arg(700'000)
        ->Arg(1'000'000);


static void BM_entt_UnpackTwoComponents(benchmark::State &state) {
    entt_benchmark.BM_UnpackTwoComponents(state);
}

BENCHMARK(BM_entt_UnpackTwoComponents)
        ->Arg(10)
        ->Arg(25)
        ->Arg(50)
        ->Arg(100)
        ->Arg(200)
        ->Arg(400)
        ->Arg(800)
        ->Arg(1600)
        ->Arg(3200)
        ->Arg(5000)
        ->Arg(10'000)
        ->Arg(30'000)
        ->Arg(50'000)
        ->Arg(100'000)
        ->Arg(300'000)
        ->Arg(500'000)
        ->Arg(700'000)
        ->Arg(1'000'000);


static void BM_entt_UnpackTwoComponentsFromMixedEntities(benchmark::State &state) {
    entt_benchmark.BM_UnpackTwoComponentsFromMixedEntities(state);
}

BENCHMARK(BM_entt_UnpackTwoComponentsFromMixedEntities)
        ->Arg(10)
        ->Arg(25)
        ->Arg(50)
        ->Arg(100)
        ->Arg(200)
        ->Arg(400)
        ->Arg(800)
        ->Arg(1600)
        ->Arg(3200)
        ->Arg(5000)
        ->Arg(10'000)
        ->Arg(30'000)
        ->Arg(50'000)
        ->Arg(100'000)
        ->Arg(300'000)
        ->Arg(500'000)
        ->Arg(700'000)
        ->Arg(1'000'000);


static void BM_entt_UnpackThreeComponentsFromMixedEntities(benchmark::State &state) {
    entt_benchmark.BM_UnpackThreeComponentsFromMixedEntities(state);
}

BENCHMARK(BM_entt_UnpackThreeComponentsFromMixedEntities)
        ->Arg(10)
        ->Arg(25)
        ->Arg(50)
        ->Arg(100)
        ->Arg(200)
        ->Arg(400)
        ->Arg(800)
        ->Arg(1600)
        ->Arg(3200)
        ->Arg(5000)
        ->Arg(10'000)
        ->Arg(30'000)
        ->Arg(50'000)
        ->Arg(100'000)
        ->Arg(300'000)
        ->Arg(500'000)
        ->Arg(700'000)
        ->Arg(1'000'000);


static void BM_entt_SystemsUpdate(benchmark::State &state) {
    entt_benchmark.BM_SystemsUpdate(state);
}

BENCHMARK(BM_entt_SystemsUpdate)
        ->Arg(10)
        ->Arg(25)
        ->Arg(50)
        ->Arg(100)
        ->Arg(200)
        ->Arg(400)
        ->Arg(800)
        ->Arg(1600)
        ->Arg(3200)
        ->Arg(5000)
        ->Arg(10'000)
        ->Arg(30'000)
        ->Arg(50'000)
        ->Arg(100'000)
        ->Arg(300'000)
        ->Arg(500'000)
        ->Arg(700'000)
        ->Arg(1'000'000);