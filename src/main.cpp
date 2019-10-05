#include <benchmark/benchmark.h>

static void BM_StringCreation(benchmark::State& state)
{
    for (auto _ : state)
    {
        std::string empty_string;
        benchmark::DoNotOptimize(empty_string);
        benchmark::ClobberMemory();
    }
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

// Define another benchmark
static void BM_StringCopy(benchmark::State& state)
{
    std::string x = "hello non optimized string";
    for (auto _ : state)
    {
        std::string copy{x};
        benchmark::DoNotOptimize(copy);
        benchmark::ClobberMemory();
    }
}
BENCHMARK(BM_StringCopy);

BENCHMARK_MAIN();
