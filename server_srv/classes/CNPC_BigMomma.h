// Generated header

class CNPC_BigMomma : public CHL1BaseNPC
{
public:
	virtual void ~CNPC_BigMomma() override; // vtable[0]
	virtual void ~CNPC_BigMomma() override; // vtable[1]
	virtual void _ZN13CNPC_BigMomma14GetDataDescMapEv() override; // vtable[12]
	virtual void _ZN13CNPC_BigMomma11MaxYawSpeedEv() override; // vtable[529]
	virtual void _ZN13CNPC_BigMomma13SquadSlotNameEi() override; // vtable[581]

	void GetBaseMap();
	void NodeStart();
	void NodeReach();
	void ShouldGoToNode();
	void LayHeadcrab();
	void LaunchMortar();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
