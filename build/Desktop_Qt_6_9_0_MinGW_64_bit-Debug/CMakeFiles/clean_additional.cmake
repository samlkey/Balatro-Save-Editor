# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Balatro_Save_Editor_autogen"
  "CMakeFiles\\Balatro_Save_Editor_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Balatro_Save_Editor_autogen.dir\\ParseCache.txt"
  )
endif()
