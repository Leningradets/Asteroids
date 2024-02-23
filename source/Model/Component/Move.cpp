#include "Move.hpp"
#include "../../Controller/Input.hpp"
#include "Phisics/Rigidbody.hpp"

void Move::Update(float deltaTime) {
    if(rigidbody == nullptr)
        return;

    rigidbody->AddForce(gameObject->transform->GetUp() * force * Input::VerticalAxis, ForceType::Force);
    rigidbody->AddTorque(torque * Input::HorizontalAxis, ForceType::Force);
}

Move::Move(float force, float torque) : force(force), torque(torque) {}

void Move::Start() {
    rigidbody  = gameObject->GetComponent<Rigidbody>();
}

