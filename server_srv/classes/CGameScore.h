// Generated header

class CGameScore : public CRulePointEntity
{
public:
	virtual ~CGameScore() override; // vtable[0]
	virtual ~CGameScore() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]

	void InputApplyScore(inputdata_t *param_1); // size[146]
	void GetBaseMap(); // size[10]
};
