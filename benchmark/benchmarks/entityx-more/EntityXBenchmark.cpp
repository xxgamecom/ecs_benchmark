#include "EntityXBenchmark.h"

#define STRING(a)   #a

static ecs::benchmarks::entityx::EnttBenchmark entityx_benchmark({
                                                                         .add_more_complex_system = true,
                                                                         .version = STRING(ENTITYX_VERSION)
                                                                 });

static void BM_entityx_ComplexSystemsUpdate(benchmark::State &state) {
    entityx_benchmark.BM_SystemsUpdate(state);
}

BENCHMARK(BM_entityx_ComplexSystemsUpdate)
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