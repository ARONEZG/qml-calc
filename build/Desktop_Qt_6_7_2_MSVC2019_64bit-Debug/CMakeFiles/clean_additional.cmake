# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appCalculator_autogen.dir\\ParseCache.txt"
  "appCalculator_autogen"
  "core_calculator\\CMakeFiles\\calc_core_autogen.dir\\AutogenUsed.txt"
  "core_calculator\\CMakeFiles\\calc_core_autogen.dir\\ParseCache.txt"
  "core_calculator\\calc_core_autogen"
  )
endif()
