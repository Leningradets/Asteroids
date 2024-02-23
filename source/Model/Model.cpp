#include <iostream>
#include "Model.hpp"
#include "GameObject/GameObject.hpp"

Model::Model() : physics()
{
    std::cout << "Model Created" << std::endl;
}

void Model::Start() {
    GameObject::StartGameObjects();
}

void Model::Update(float deltaTime) {
    physics->Update(deltaTime);
    GameObject::UpdateGameObjects(deltaTime);
}

Model::~Model() {
    delete physics;
    GameObject::DleteGameObjects();
}


