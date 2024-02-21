cmake_minimum_required(VERSION 3.25)
project(Asteroids)

set(CMAKE_CXX_STANDARD 17)

add_executable(Asteroids source/main.cpp source/Game.cpp source/Game.hpp source/Model/Model.cpp source/Model/Model.hpp source/Model/Physics/Physics.cpp source/Model/Physics/Physics.hpp source/Controller/Input.cpp source/Controller/Input.hpp source/Model/Component/Graphics/Renderer.hpp source/Controller/Controller.cpp source/Controller/Controller.hpp source/View/View.cpp source/View/View.hpp source/View/Graphics/Graphics.cpp source/View/Graphics/Graphics.hpp source/Model/Component/Graphics/CircleRenderer.cpp source/Model/Component/Graphics/CircleRenderer.hpp source/Model/Transform.cpp source/Model/Transform.hpp source/Model/Vector2D.cpp source/Model/Vector2D.hpp source/Model/Component/Phisics/Rigidbody.cpp source/Model/Component/Phisics/Rigidbody.hpp source/Model/GameObject/GameObject.cpp source/Model/GameObject/GameObject.hpp source/Model/Component/Graphics/Renderer.cpp source/Model/Component/Graphics/DrawableRenderer.cpp source/Model/Component/Graphics/DrawableRenderer.hpp source/Model/Component/Component.cpp source/Model/Component/Component.hpp source/Model/GameObject/Spaceship.cpp source/Model/GameObject/Spaceship.hpp source/Model/Component/Graphics/LinesRenderer.cpp source/Model/Component/Graphics/LinesRenderer.hpp source/Model/Component/Move.cpp source/Model/Component/Move.hpp source/Model/Time.cpp source/Model/Time.hpp source/Model/Component/Phisics/ForceType.hpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include/SFML)
target_link_libraries(Asteroids sfml-system sfml-window sfml-graphics sfml-audio)