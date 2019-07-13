#pragma once

#include <cstdint>
#include <string>

#include <absl/types/optional.h>

#include "chainerx/array.h"
#include "chainerx/constant.h"

namespace chainerx {

Array Accuracy(const Array& x1, const Array& x2, const absl::optional<int8_t>& ignore_label);

}  // namespace chainerx
