// Generated header

class CEngineRecipientFilter : public IRecipientFilter
{
public:
	virtual ~CEngineRecipientFilter() override; // vtable[0]
	virtual ~CEngineRecipientFilter() override; // vtable[1]
	virtual void IsReliable(); // vtable[2]
	virtual void IsInitMessage(); // vtable[3]
	virtual void GetRecipientCount(); // vtable[4]
	virtual void GetRecipientIndex(int param_1) override; // vtable[5]

	_GLOBAL__sub_I_CEngineRecipientFilter(); // size[72]
	CEngineRecipientFilter(); // size[57]
	void Reset(); // size[23]
	void MakeReliable(); // size[12]
	void MakeInitMessage(); // size[12]
	void RemoveRecipient(int param_1); // size[124]
	void IncludesPlayer(int param_1); // size[73]
	void AddAllPlayers(); // size[148]
	void AddRecipient(int param_1); // size[85]
	void AddPlayersFromBitMask(CBitVec *param_1); // size[177]
	void AddRecipientsByPVS(Vector *param_1); // size[94]
	void AddRecipientsByPAS(Vector *param_1); // size[94]
	void AddPlayersFromFilter(IRecipientFilter *param_1); // size[66]
};
