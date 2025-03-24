/*
* =======================================================================================================================
*
	COSA FA QUESTO SCRIPT?

	1) Lo script crea un attore con un volume di collisione a forma di box
	2) Quando il giocatore entra nel volume, la funzione "OnPlayerOverlap" viene chiamata
	3) Se il volume è all'interno del Livello 1 o 2, la variabile corrispondente viene impostata a TRUE
	4) Le variabili booleane sono accessibili dai blueprint
*
* =======================================================================================================================
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCRIPT_Livello_Completato.generated.h"

/*
	"UCLASS()" è una macro di UE5 che definisce la classe "PROVA_GITHUB_API ASCRIPT_Livello_Completato" come una classe di
	Unreal Engine, rendendola disponibile per l'editor e il sistema di reflection
*/

UCLASS()
class PROVA_GITHUB_API ASCRIPT_Livello_Completato : public AActor
{
	GENERATED_BODY()
	
public:	
	// Dichiarazione del costruttore della classe che verrà definito nel file .cpp
	ASCRIPT_Livello_Completato();

protected:
	// Dichiarazione della funzione "BeginPlay()" che viene chiamata quando l'oggetto entra nel gioco
	virtual void BeginPlay() override;

public:	
	// Dichiarazione della funzione "Tick()" che viene chiamata ogni frame
	virtual void Tick(float DeltaTime) override;

	/*
		Dichiaro le due variabili booleane "blv1_completato" e "blv2_completato" e le rendo accessibili
		ai blueprint tramite la macro "UPROPERTY(BlueprintReadWrite)"
	*/
	UPROPERTY(BlueprintReadWrite, Category = "SCRIPT Livello Completato")
	bool blv1_completato;

	UPROPERTY(BlueprintReadWrite, Category = "SCRIPT Livello Completato")
	bool blv2_completato;

	/*
		Dichiaro una variabile "livello_numero" in int32 che mi stabilisce in quale livello si trova l'attore.
		La macro "UPROPERTY(EditAnywhere, BlueprintReadWrite)" la rende visibile e modificabile sia nel blueprint che nell'editor
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCRIPT Livello Completato")
	int32 livello_numero;

	/*
		Dichiaro la funzione che verrà chiamata quando un oggetto entra in collisione col trigger.
		La macro "UFUNCTION()" la rende disponibile per il sistema di reflection
	*/
	UFUNCTION()
	void OnPlayerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OthrComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/*
		Dichiaro il componente "UboxComponent" che rappresenta il volume di collisione rettangolare.
		La macro "UPROPERTY(VisibleAnywhere)" lo rende visibile nell'editor, ma non permette le modifiche
	*/
private:
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* TriggerBox;
};
