// Generated header

class CEnvHeadcrabCanister : public CBaseAnimating
{
public:
	virtual void ~CEnvHeadcrabCanister() override; // vtable[0]
	virtual void ~CEnvHeadcrabCanister() override; // vtable[1]

	void InputStopSmoke();
	void HeadcrabCanisterSkyboxOnlyThink();
	void HeadcrabCanisterSpawnHeadcrabThink();
	void GetBaseMap();
	void CEnvHeadcrabCanister();
	void SetupWorldModel();
	void HeadcrabCanisterSkyboxThink();
	void ComputeWorldEntryPoint();
	void PlaceCanisterInWorld();
	void TestForCollisionsAgainstWorld();
	void StartSpawningHeadcrabs();
	void InputSpawnHeadcrabs();
	void InputFireCanister();
	void HeadcrabCanisterSkyboxRestartThink();
	void CanisterFinishedOpening();
	void WaitForOpenSequenceThink();
	void OpenCanister();
	void InputOpenCanister();
	void OpenCanister();
	void SetLanded();
	void Landed();
	void Detonate();
	void TestForCollisionsAgainstEntities();
	void HeadcrabCanisterWorldThink();
	void NetworkStateChanged();
	void NetworkStateChanged();
};
