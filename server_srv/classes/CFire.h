// Generated header

class CFire : public CBaseEntity
{
public:
	virtual void ~CFire() override; // vtable[0]
	virtual void ~CFire() override; // vtable[1]
	virtual void Update(); // vtable[246]

	void InputEnable();
	void BurnThink();
	void GetBaseMap();
	void CFire();
	void SpawnEffect();
	void Init();
	void Start();
	void StartFire();
	void InputStartFire();
	void AddHeat();
	void IsBurning();
	void GetFireDimensions();
	void DestroyEffect();
	void AddHeat();
	void Scale();
	void GoOutInSeconds();
	void InputExtinguishTemporary();
	void InputExtinguish();
	void GoOut();
	void Disable();
	void InputDisable();
	void GoOutThink();
	void Extinguish();
};
