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

/*
#include "SCRIPT_Livello_Completato.h"
#include "Components/BoxComponent.h" // Include la definizine della classe "UBoxComponent", necessaria per creare il volume della collisione

// Sets default values
ASCRIPT_Livello_Completato::ASCRIPT_Livello_Completato()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Inizializzo le variabili booleane a FALSE
	blv1_completato = false;
	blv2_completato = false;

	// Crea un componente "UBoxComponent" e lo assegna alla variabile "TriggerBox", impostandolo come radice dell'attore
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	/*
	*	Imposto le dimensioni del "TriggerBox" a 100 unità per gli assi X,Y, e Z.
	*	Poi collego la funzione "OnPlayerOverlap" all'evento "OnComponentBeginOverlap" del box di collisione	 
	*/
	/*TriggerBox->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ASCRIPT_Livello_Completato::OnPlayerOverlap);
}

// Called when the game starts or when spawned
void ASCRIPT_Livello_Completato::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASCRIPT_Livello_Completato::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}*/
/*
// Funzione che viene chiamata quanod il player entra nel box di collisione
void ASCRIPT_Livello_Completato::OnPlayerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	// Controlla se l'attore che ha colliso è un "Character"
	ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor);
	
	// Imposto le rispettive variabili booleane a TRUE in base al livello in cui l'attore si trova
	if (PlayerCharacter)
	{
		if (livello_numero == 1)
		{
			blv1_completato = true;
		}
		else if (livello_numero == 2)
		{
			blv2_completato = true;
		}
	}
}*/