// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Collider.generated.h"


UCLASS()
class LABESCAPE_API ACollider : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACollider();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UCameraComponent* CameraComponent;
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USpringArmComponent* SpringArmComponent; 

	FORCEINLINE UStaticMeshComponent* getMeshComponent() { return this->MeshComponent; }
	FORCEINLINE void setMeshComponent(UStaticMeshComponent* mesh) { this->MeshComponent = mesh; }
	FORCEINLINE USphereComponent* getSphereComponent() { return this->SphereComponent; }
	FORCEINLINE void setSphereComponent(USphereComponent* sphere) { this->SphereComponent = sphere; }
	FORCEINLINE UCameraComponent* getCameraComponent() { return this->CameraComponent; }
	FORCEINLINE void setCameraComponent(UCameraComponent* camera) { this->CameraComponent = camera; }
	FORCEINLINE USphereComponent* getSpringArmComponent() { return this->SphereComponent; }
	FORCEINLINE void setSpringArmComponent(USpringArmComponent* springArm) { this->SpringArmComponent = springArm; }

private:

	void MoveForward(float input);
	void MoveRight(float input);

};
