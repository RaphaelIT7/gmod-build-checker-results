// Generated header

class CRecipientFilter : public IRecipientFilter
{
public:
	virtual void ~CRecipientFilter() override; // vtable[0]
	virtual void ~CRecipientFilter() override; // vtable[1]
	virtual void IsReliable(); // vtable[2]
	virtual void IsInitMessage(); // vtable[3]
	virtual void GetRecipientCount(); // vtable[4]
	virtual void GetRecipientIndex() override; // vtable[5]

	void _GLOBAL__sub_I_CRecipientFilter();
	void CRecipientFilter();
	void Reset();
	void MakeReliable();
	void RemoveAllRecipients();
	void GMOD_HasRecipient();
	void MakeInitMessage();
	void IsUsingPredictionRules();
	void IgnorePredictionCull();
	void SetIgnorePredictionCull();
	void RemoveRecipient();
	void RemoveRecipientsByTeam();
	void RemoveRecipientsNotOnTeam();
	void RemovePlayersFromBitMask();
	void RemoveRecipientsByPVS();
	void GMOD_RemoveRecipientsByPAS();
	void UsePredictionRules();
	void RemoveRecipientByPlayerIndex();
	void CopyFrom();
	void AddRecipient();
	void AddAllPlayers();
	void AddRecipientsByTeam();
	void AddPlayersFromBitMask();
	void AddRecipientsByPVS();
	void AddRecipientsByPAS();
};
