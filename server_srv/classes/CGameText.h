// Generated header

class CGameText : public CRulePointEntity
{
public:
	virtual ~CGameText() override; // vtable[0]
	virtual ~CGameText() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]

	void InputSetPosX(inputdata_t *param_1); // size[33]
	void InputSetPosY(inputdata_t *param_1); // size[33]
	void InputSetTextColor(inputdata_t *param_1); // size[70]
	void InputSetTextColor2(inputdata_t *param_1); // size[70]
	void InputSetText(inputdata_t *param_1); // size[73]
	void GetBaseMap(); // size[10]
	void Display(CBaseEntity *param_1); // size[189]
	void InputDisplay(inputdata_t *param_1); // size[17]
	void SetText(char *param_1); // size[41]
	void SetPosX(floatparam_1); // size[21]
	void SetPosY(floatparam_1); // size[21]
	void SetTextColor(color32_sparam_1); // size[46]
	void SetTextColor2(color32_sparam_1); // size[46]
};
