// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floater.generated.h"

UCLASS()
class LABESCAPE_API AFloater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloater();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ActorMeshComponents")
	UStaticMeshComponent* StaticMesh;

	// Loaction used by SetActorLocation() when BeginPlay is caleed()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector initialLocation;

	// Location of the Actor when dragged in from editor
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector placedLocation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Floater Variables")
	FVector worldOrigin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floater Variables")
	FVector InitialDirection;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floater Variables")
		bool bShouldFloat;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Floater Variables")
	bool bInitializeFloaterLocations;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
