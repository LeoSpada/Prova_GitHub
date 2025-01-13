#include "MyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h" // Per il movimento
#include "Components/InputComponent.h"               // Per i comandi di input

AMyCharacter::AMyCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Configura l'altezza del salto
    GetCharacterMovement()->JumpZVelocity = JumpHeight;
}

void AMyCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AMyCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind per il movimento avanti
    PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);

    // Bind per il salto
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::StartJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::StopJump);
}

void AMyCharacter::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        // Aggiungi movimento avanti
        AddMovementInput(GetActorForwardVector(), Value);
    }
}

void AMyCharacter::StartJump()
{
    bPressedJump = true; // Esegue il salto
}

void AMyCharacter::StopJump()
{
    bPressedJump = false; // Termina il salto
}
