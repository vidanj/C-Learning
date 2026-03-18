add_executable(HelloWorld hello_world.cpp)
target_link_libraries(HelloWorld PRIVATE PPP)

# Add more drills below as you progress through the book:
# add_executable(DrillName DrillName.cpp)
# target_link_libraries(DrillName PRIVATE PPP)
add_executable(ObjectsTypesValues objects_types_values.cpp)
target_link_libraries(ObjectsTypesValues PRIVATE PPP)