// Copyright 2021 The Google Research Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SKETCHING_BENCHMARK_UTILS_H_
#define SKETCHING_BENCHMARK_UTILS_H_

#include "benchmark/benchmark.h"
#include "sketch.h"

namespace sketch {

void Add(benchmark::State& state, Sketch* sketch);

}  // namespace sketch

#endif  // SKETCHING_BENCHMARK_UTILS_H_
