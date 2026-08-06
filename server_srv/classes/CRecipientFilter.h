// Generated header

class CRecipientFilter : public IRecipientFilter
{
public:
	virtual ~CRecipientFilter() override; // vtable[0]
	virtual ~CRecipientFilter() override; // vtable[1]
	virtual void IsReliable(); // vtable[2]
	virtual void IsInitMessage(); // vtable[3]
	virtual void GetRecipientCount(); // vtable[4]
	virtual void GetRecipientIndex(int param_1) override; // vtable[5]

	_GLOBAL__sub_I_CRecipientFilter(); // size[113]
	CRecipientFilter(); // size[65]
	void Reset(); // size[31]
	void MakeReliable(); // size[12]
	void RemoveAllRecipients(); // size[15]
	void GMOD_HasRecipient(int param_1); // size[60]
	void MakeInitMessage(); // size[12]
	void IsUsingPredictionRules(); // size[12]
	void IgnorePredictionCull(); // size[12]
	void SetIgnorePredictionCull(bool param_1); // size[14]
	void RemoveRecipient(CBasePlayer *param_1); // size[54]
	void RemoveRecipientsByTeam(CTeam *param_1); // size[81]
	void RemoveRecipientsNotOnTeam(CTeam *param_1); // size[94]
	void RemovePlayersFromBitMask(CBitVec *param_1); // size[667]
	void RemoveRecipientsByPVS(Vector *param_1); // size[107]
	void GMOD_RemoveRecipientsByPAS(Vector *param_1); // size[107]
	void UsePredictionRules(); // size[122]
	void RemoveRecipientByPlayerIndex(int param_1); // size[29]
	void CopyFrom(CRecipientFilter *param_1); // size[144]
	void AddRecipient(CBasePlayer *param_1); // size[178]
	void AddAllPlayers(); // size[84]
	void AddRecipientsByTeam(CTeam *param_1); // size[81]
	void AddPlayersFromBitMask(CBitVec *param_1); // size[667]
	void AddRecipientsByPVS(Vector *param_1); // size[108]
	void AddRecipientsByPAS(Vector *param_1); // size[108]
};
