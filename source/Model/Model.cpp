#include <iostream>
#include "Model.h"
#include "GameObject/GameObject.h"

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


