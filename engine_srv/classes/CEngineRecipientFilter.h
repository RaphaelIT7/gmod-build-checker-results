// Generated header

class CEngineRecipientFilter : public IRecipientFilter
{
public:
	virtual void ~CEngineRecipientFilter() override; // vtable[0]
	virtual void ~CEngineRecipientFilter() override; // vtable[1]
	virtual void IsReliable(); // vtable[2]
	virtual void IsInitMessage(); // vtable[3]
	virtual void GetRecipientCount(); // vtable[4]
	virtual void GetRecipientIndex() override; // vtable[5]

	void _GLOBAL__sub_I_CEngineRecipientFilter();
	void CEngineRecipientFilter();
	void Reset();
	void MakeReliable();
	void MakeInitMessage();
	void RemoveRecipient();
	void IncludesPlayer();
	void AddAllPlayers();
	void AddRecipient();
	void AddPlayersFromBitMask();
	void AddRecipientsByPVS();
	void AddRecipientsByPAS();
	void AddPlayersFromFilter();
};
