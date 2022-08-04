cmake_minimum_required(VERSION 3.5)
project(params_test_node)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

ament_auto_add_library(${PROJECT_NAME} SHARED
  src/${PROJECT_NAME}.cpp
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "params_test_node::ParamsTestNode"
  EXECUTABLE ${PROJECT_NAME}_exe
)

ament_auto_package()

# ament_auto_package(
#   INSTALL_TO_SHARE
#   launch
# )
