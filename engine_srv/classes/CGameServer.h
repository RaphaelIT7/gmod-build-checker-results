// Generated header

class CGameServer : public CBaseServer
{
public:
	virtual void ~CGameServer() override; // vtable[0]
	virtual void ~CGameServer() override; // vtable[1]

	void SetQueryPortFromSteamServer();
	void SetQueryPortFromSteamServer();
	void InitMaxClients();
	void BroadcastSound();
	void IsInPureServerMode();
	void GetPureServerWhitelist();
	void IsHibernating();
	void SetHibernating();
	void UpdateHibernationState();
	void FinishRestore();
	void CopyTempEntities();
	void ReloadWhitelist();
	void SpawnServer();
	void CopyPureServerWhitelistToStringTable();
	void CreateEngineStringTables();
	void CGameServer();
	void AssignClassIds();
	void GetModelPrecacheTable();
	void PrecacheModel();
	void GetModel();
	void LookupModelIndex();
	void GetSoundPrecacheTable();
	void PrecacheSound();
	void GetSound();
	void LookupSoundIndex();
	void GetGenericPrecacheTable();
	void PrecacheGeneric();
	void GetGeneric();
	void LookupGenericIndex();
	void GetDecalPrecacheTable();
	void PrecacheDecal();
	void LookupDecalIndex();
	void DumpPrecacheStats();
};
