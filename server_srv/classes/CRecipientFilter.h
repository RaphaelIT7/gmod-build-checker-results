// Generated header

class CRecipientFilter : public IRecipientFilter
{
public:
	virtual ~CRecipientFilter() override; // vtable[0]
	virtual ~CRecipientFilter() override; // vtable[1]
	virtual void IsReliable(); // vtable[2]
	virtual void IsInitMessage(); // vtable[3]
	virtual void GetRecipientCount(); // vtable[4]
	virtual void GetRecipientIndex() override; // vtable[5]

	_GLOBAL__sub_I_CRecipientFilter(); // size[0]
	CRecipientFilter(); // size[0]
	void Reset(); // size[0]
	void MakeReliable(); // size[0]
	void RemoveAllRecipients(); // size[0]
	void GMOD_HasRecipient(); // size[0]
	void MakeInitMessage(); // size[0]
	void IsUsingPredictionRules(); // size[0]
	void IgnorePredictionCull(); // size[0]
	void SetIgnorePredictionCull(); // size[0]
	void RemoveRecipient(); // size[0]
	void RemoveRecipientsByTeam(); // size[0]
	void RemoveRecipientsNotOnTeam(); // size[0]
	void RemovePlayersFromBitMask(); // size[0]
	void RemoveRecipientsByPVS(); // size[0]
	void GMOD_RemoveRecipientsByPAS(); // size[0]
	void UsePredictionRules(); // size[0]
	void RemoveRecipientByPlayerIndex(); // size[0]
	void CopyFrom(); // size[0]
	void AddRecipient(); // size[0]
	void AddAllPlayers(); // size[0]
	void AddRecipientsByTeam(); // size[0]
	void AddPlayersFromBitMask(); // size[0]
	void AddRecipientsByPVS(); // size[0]
	void AddRecipientsByPAS(); // size[0]
};
