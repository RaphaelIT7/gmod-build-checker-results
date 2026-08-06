// Generated header

class CFishPool : public CBaseEntity, public CGameEventListener
{
public:
	virtual ~CFishPool() override; // vtable[0]
	virtual ~CFishPool() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[246]

	void FireGameEvent(IGameEvent *param_1); // size[13]
	void GetBaseMap(); // size[10]
	CFishPool(); // size[34]
	void Update(); // size[55]
	~CFishPool(); // size[13]
	~CFishPool(); // size[13]
};
