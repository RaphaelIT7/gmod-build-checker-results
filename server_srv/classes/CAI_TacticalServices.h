// Generated header

class CAI_TacticalServices : public CAI_Component
{
public:
	virtual ~CAI_TacticalServices() override; // vtable[0]
	virtual ~CAI_TacticalServices() override; // vtable[1]

	void GetBaseMap(); // size[7]
	void Init(CAI_Network *param_1); // size[26]
	void TestLateralCover(Vector *param_1, Vector *param_2, floatparam_3); // size[364]
	void FindLateralCover(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4, intparam_5, Vector *param_6); // size[485]
	void FindLateralCover(Vector *param_1, floatparam_2, floatparam_3, intparam_4, Vector *param_5); // size[99]
	void FindLateralCover(Vector *param_1, floatparam_2, Vector *param_3); // size[60]
	void FindBackAwayNode(Vector *param_1); // size[903]
	void TestLateralLos(Vector *param_1, Vector *param_2); // size[453]
	void FindLateralLos(Vector *param_1, Vector *param_2); // size[512]
	void GetNodePos(intparam_1); // size[82]
	void FindBackAwayPos(Vector *param_1, Vector *param_2); // size[496]
	void FindCoverNode(Vector *param_1, Vector *param_2, Vector *param_3, floatparam_4, floatparam_5); // size[2413]
	void FindCoverPos(Vector *param_1, Vector *param_2, Vector *param_3, floatparam_4, floatparam_5, Vector *param_6); // size[151]
	void FindCoverPos(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4, Vector *param_5); // size[75]
	void FindCoverNode(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4); // size[68]
	void FindLosNode(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4, floatparam_5, FlankType_tparam_6, Vector *param_7, floatparam_8); // size[2171]
	void FindLos(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4, floatparam_5, FlankType_tparam_6, Vector *param_7, floatparam_8, Vector *param_9); // size[180]
	void FindLos(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4, floatparam_5, Vector *param_6); // size[97]
};
