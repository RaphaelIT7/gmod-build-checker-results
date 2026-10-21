// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Synapse_Real : public IVP_Synapse
{
public:
	virtual _ZN16IVP_Synapse_RealD1Ev() override; // vtable[4]
	virtual ~IVP_Synapse_Real() override; // vtable[5]
	virtual void print(); // vtable[6]

	void check_consistency_of_ledge(IVP_Compact_Edge *param_1); // size[1]
	void update_synapse(IVP_Compact_Edge *param_1, IVP_SYNAPSE_POLYGON_STATUS param_2); // size[9]
	IVP_Synapse_Real(); // size[11]
	void init_synapse(IVP_Mindist *param_1, IVP_Real_Object *param_2, IVP_Compact_Edge *param_3, IVP_SYNAPSE_POLYGON_STATUS param_4); // size[31]
	void get_core(); // size[12]
	void get_hull_manager(); // size[9]
	void get_next(); // size[5]
	void get_prev(); // size[5]
	void get_mindist(); // size[9]
};
