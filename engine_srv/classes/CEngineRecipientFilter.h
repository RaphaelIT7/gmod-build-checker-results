// Generated header

class CEngineRecipientFilter : public IRecipientFilter
{
public:
	virtual ~CEngineRecipientFilter() override; // vtable[0]
	virtual ~CEngineRecipientFilter() override; // vtable[1]
	virtual void IsReliable(); // vtable[2]
	virtual void IsInitMessage(); // vtable[3]
	virtual void GetRecipientCount(); // vtable[4]
	virtual void GetRecipientIndex() override; // vtable[5]

	_GLOBAL__sub_I_CEngineRecipientFilter(); // size[0]
	CEngineRecipientFilter(); // size[0]
	void Reset(); // size[0]
	void MakeReliable(); // size[0]
	void MakeInitMessage(); // size[0]
	void RemoveRecipient(); // size[0]
	void IncludesPlayer(); // size[0]
	void AddAllPlayers(); // size[0]
	void AddRecipient(); // size[0]
	void AddPlayersFromBitMask(); // size[0]
	void AddRecipientsByPVS(); // size[0]
	void AddRecipientsByPAS(); // size[0]
	void AddPlayersFromFilter(); // size[0]
};
