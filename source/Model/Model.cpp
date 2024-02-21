#include <iostream>
#include "Model.hpp"
#include "GameObject/GameObject.hpp"

Model::Model() : physics()
{
    std::cout << "Model Created" << std::endl;
}

void Model::Update(float deltaTimne) {
    physics->Update(deltaTimne);
    GameObject::UpdateGameObjects(deltaTimne);
}

Model::~Model() {
    delete physics;
    GameObject::DleteGameObjects();
}


