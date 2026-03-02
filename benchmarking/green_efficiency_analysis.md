# Analysis - REPORT

## 1. Measurement Methodology
I implemented a timing system using the standard library <time.h>. It provides the clock() function, which captures the number of processor clock ticks during the execution.
The results are converted into seconds by dividing the values by CLOCKS_PER_SEC.
I used checkpoints (start and end variables) to measure the global time and the time for each specific phase.
On my macOS machine, this method provides a theoretical precision down to the microsecond
I used this command line to compile the program : 
gcc -Wall (not all but important warnings) -Werror(Zero tolerance) -Wextra(another layer of warnings) -pedantic(ISO C) -std=gnu89(language) -Wno-long-long(exeption for long long in C89)

## 2. Observed Performance Differences
I ran the program three times to see how the values change. Here is the data:
Run 1: TOTAL: 0.000679s | BUILD: 0.000354s | PROCESS: 0.000188s | REDUCE: 0.000133s
Run 2: TOTAL: 0.000324s | BUILD: 0.000170s | PROCESS: 0.000089s | REDUCE: 0.000062s
Run 3: TOTAL: 0.001000s | BUILD: 0.000532s | PROCESS: 0.000270s | REDUCE: 0.000190s
Averages and Analysis:
AVG Total: 0.000668s
AVG Build: 0.000352s (approx. 52.7% of total time)
AVG Process: 0.000182s (approx. 27.2% of total time)
AVG Reduce: 0.000128s (approx. 19.1% of total time)
The data clearly shows that the BUILD_DATA phase is the most time-consuming. I think this is because of the overhead of memory allocation and the initialization of the static arrays. The CPU needs more time to interact with the RAM than for the simple arithmetic logic in the other phases.

## 3. Relation Between Runtime and Energy Consumption
We can see a direct link between the execution time and the energy used by the computer. Modern CPUs consume power mainly when they switch transistor states. This means that if we reduce the number of CPU cycles for a task, we directly lower the energy consumption (Watt-hours).
Optimized code is more "green" and sustainable. In big systems or on mobile phones, even a 10% reduction in the PROCESS phase can save battery and produce less heat. As developers, we should always try to find the best code optimization possible to reduce the environmental impact of our software.

## 4. Limitations of the Experiment
Even if clock() is a standard tool, it has some limitations that I noticed:
CPU vs. Wall Clock: It measures the "CPU time," not the real time. If the program waits for a file or a network response, clock() might not count that waiting time.
Granularity: If a program is too fast, the execution might happen between two "ticks" of the clock, and the result will be 0.000000.
Multitasking: On my macOS system, the OS scheduler switches between many tasks. Other background programs can cause variations in the results, which explains the differences between Run 1 and Run 3.

## 5. Practical Engineering Takeaway
This instrumentation shows that it is useless to spend time optimizing the REDUCE phase if 90% of the time is spent in PROCESS. We must focus our efforts where the bottleneck is.
The most important lesson is that you cannot improve what you cannot measure. Using time markers is the essential first step for any performance engineering work. It helps to make decisions based on real data instead of just guessing.