// Generated header

class CPropVehicleViewController : public CPropVehicleDriveable
{
public:
	virtual ~CPropVehicleViewController() override; // vtable[0]
	virtual ~CPropVehicleViewController() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Think() override; // vtable[48]
	virtual void SetupMove(CBasePlayer *param_1, CUserCmd *param_2, IMoveHelper *param_3, CMoveData *param_4) override; // vtable[294]
	virtual void ExitVehicle(int param_1) override; // vtable[305]
	virtual void EnterVehicle(CBasePlayer *param_1); // vtable[315]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void SetupMove(CBasePlayer *param_1, CUserCmd *param_2, IMoveHelper *param_3, CMoveData *param_4); // size[10]
	void InputForcePlayerOut(inputdata_t *param_1); // size[128]
	void InputForcePlayerIn(inputdata_t *param_1); // size[269]
	void GetBaseMap(); // size[10]
	void ExitVehicle(int param_1); // size[13]
};
