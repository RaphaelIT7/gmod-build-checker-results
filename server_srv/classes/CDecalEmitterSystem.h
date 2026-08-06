// Generated header

class CDecalEmitterSystem : public IDecalEmitterSystem, public CAutoGameSystem
{
public:
	virtual void GetDecalIndexForName() override; // vtable[0]
	virtual void TranslateDecalForGameMaterial() override; // vtable[1]
	virtual void AddDecal() override; // vtable[2]
	virtual void AddDecalEx() override; // vtable[3]
	virtual void GetDecalMaterial() override; // vtable[4]
	virtual void Init() override; // vtable[5]
	virtual void Shutdown() override; // vtable[6]
	virtual void LevelInitPreEntity() override; // vtable[7]
	virtual void ~CDecalEmitterSystem() override; // vtable[9]
	virtual void ~CDecalEmitterSystem() override; // vtable[10]

	void LevelInitPreEntity();
	void ImpactDecalForGameMaterial();
	void GetDecalMaterialName();
	void DoModelMaterialPrecache();
	void Clear();
	void Shutdown();
	void LoadDecalsFromScript();
	void Init();
	void LevelShutdownPostEntity();
	void CDecalEmitterSystem();
	void ~CDecalEmitterSystem();
	void ~CDecalEmitterSystem();
};
