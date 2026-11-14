# Green Efficiency Analysis

## Measurement Methodology

I measured three C programs in the Holberton Linux sandbox using the required GCC options: `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. The programs use `clock()` and `CLOCKS_PER_SEC` to report elapsed processor time in seconds. I kept the supplied algorithms and inputs unchanged. For the baseline and algorithm comparison, I ran each program three consecutive times and recorded the printed results. The instrumentation program was run once with timing checkpoints around its three processing phases. These measurements describe this execution environment, not a universal performance guarantee.

## Observed Performance Differences

The baseline loop performed 100,000,000 iterations in every run. Its recorded times were 0.230362, 0.231023, and 0.230888 seconds, giving an average of approximately 0.230758 seconds. The spread between the slowest and fastest run was only 0.000661 seconds. This shows small timing variation even when the program executes the same fixed workload.

In the algorithm comparison, the naive implementation took 2.770592, 2.788370, and 2.840726 seconds. Its average was 2.799896 seconds. The single-pass implementation took 0.000105, 0.000106, and 0.000121 seconds, averaging about 0.000111 seconds. The recorded summary reports the naive version as approximately 25,300.27 times slower based on the averages. The nested loops in the naive implementation perform substantially more repeated work, while the single-pass loop visits each array position once.

An important qualification is that the implementations did not return the same result: the naive function returned 625,025,000, while the single-pass function returned 25,000. The first function repeatedly counts earlier even values, whereas the second counts each even value once. Therefore, the timing comparison demonstrates the cost of repeated work but is not a fair performance comparison of two functionally equivalent solutions.

The instrumentation run reported TOTAL 0.000915 seconds, BUILD_DATA 0.000446 seconds, PROCESS 0.000319 seconds, and REDUCE 0.000150 seconds. BUILD_DATA was the longest measured phase, followed by PROCESS and REDUCE. The phase times add up to the measured total. Timing checkpoints were placed immediately before the first phase and immediately after each successive phase, excluding the final output printing from the measured total.

## Relation Between Runtime and Energy Consumption

Longer processor activity can contribute to greater energy use, so reducing unnecessary computation is a reasonable engineering goal. In these measurements, the naive implementation occupied much more processor time than the single-pass implementation. This suggests potential efficiency benefits from avoiding repeated operations. However, no electrical power or energy in joules was measured. The results cannot establish an exact energy saving or carbon reduction.

## Limitations of the Experiment

The experiments used one sandbox environment and a small number of runs. The instrumentation program was measured only once, and its very short phase timings are sensitive to clock resolution and system activity. The `clock()` measurements represent processor time rather than a direct electricity measurement. The algorithm comparison also has a functional mismatch between its outputs, which limits conclusions about choosing between equivalent implementations. Different compiler optimization settings or hardware could change the timing ratios.

## Practical Engineering Takeaway

I should measure software rather than assume that one implementation is faster. Repeated measurements reveal variability, and phase-level timing helps locate where time is spent. Before recommending a faster implementation, I must also confirm that it produces the correct result. The strongest supported conclusion here is that eliminating repeated work can greatly reduce measured processor time, while claims about actual energy savings require separate power measurements.
