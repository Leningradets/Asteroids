#include "Move.h"
#include "../../Controller/Input.h"
#include "Phisics/Rigidbody.h"

void Move::Update(float deltaTime) {
    auto* rigidbody = gameObject->GetComponent<Rigidbody>();

    if(rigidbody == nullptr)
        return;

    rigidbody->AddForce(gameObject->transform->GetUp() * force * Input::VerticalAxis, ForceType::Force);
    rigidbody->AddTorque(torque * Input::HorizontalAxis, ForceType::Force);
}

Move::Move(float speed, float torque) : force(speed), torque(torque) {}