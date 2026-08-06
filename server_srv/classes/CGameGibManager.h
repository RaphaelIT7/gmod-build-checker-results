// Generated header

class CGameGibManager : public CBaseEntity
{
public:
	virtual ~CGameGibManager() override; // vtable[0]
	virtual ~CGameGibManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]

	void InputSetMaxPieces(inputdata_t *param_1); // size[59]
	void InputSetMaxPiecesDX8(inputdata_t *param_1); // size[89]
	void GetBaseMap(); // size[10]
	void UpdateMaxPieces(); // size[47]
	void AddGibToLRU(CBaseAnimating *param_1); // size[445]
};
