cmake_minimum_required(VERSION 3.25)
project(Asteroids)

set(CMAKE_CXX_STANDARD 17)

add_executable(Asteroids source/main.cpp source/Game.cpp source/Game.h source/Model/Model.cpp source/Model/Model.h source/Model/Physics/Physics.cpp source/Model/Physics/Physics.h source/Controller/Input.cpp source/Controller/Input.h source/Model/Component/Graphics/Renderer.h source/Controller/Controller.cpp source/Controller/Controller.h source/View/View.cpp source/View/View.h source/View/Graphics/Graphics.cpp source/View/Graphics/Graphics.h source/Model/Component/Graphics/CircleRenderer.cpp source/Model/Component/Graphics/CircleRenderer.h source/Model/Transform.cpp source/Model/Transform.h source/Model/Vector2D.cpp source/Model/Vector2D.h source/Model/Component/Phisics/Rigidbody.cpp source/Model/Component/Phisics/Rigidbody.h source/Model/GameObject/GameObject.cpp source/Model/GameObject/GameObject.h source/Model/Component/Graphics/Renderer.cpp source/Model/Component/Graphics/DrawableRenderer.cpp source/Model/Component/Graphics/DrawableRenderer.h source/Model/Component/Component.cpp source/Model/Component/Component.h source/Model/GameObject/Spaceship.cpp source/Model/GameObject/Spaceship.h source/Model/Component/Graphics/LinesRenderer.cpp source/Model/Component/Graphics/LinesRenderer.h source/Model/Component/Move.cpp source/Model/Component/Move.h source/Model/Time.cpp source/Model/Time.h source/Model/Component/Phisics/ForceType.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include/SFML)
target_link_libraries(Asteroids sfml-system sfml-window sfml-graphics sfml-audio)