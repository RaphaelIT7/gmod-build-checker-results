// Generated header

class IVP_Synapse_Real : public IVP_Synapse
{
public:
	virtual ~IVP_Synapse_Real() override; // vtable[4]
	virtual ~IVP_Synapse_Real() override; // vtable[5]
	virtual void print(); // vtable[6]

	void check_consistency_of_ledge(IVP_Compact_Edge *param_1); // size[1]
	void update_synapse(IVP_Compact_Edge *param_1, IVP_SYNAPSE_POLYGON_STATUS param_2); // size[21]
	IVP_Synapse_Real(); // size[14]
	void init_synapse(IVP_Mindist *param_1, IVP_Real_Object *param_2, IVP_Compact_Edge *param_3, IVP_SYNAPSE_POLYGON_STATUS param_4); // size[43]
	void get_core(); // size[17]
	void get_hull_manager(); // size[14]
	void get_next(); // size[11]
	void get_prev(); // size[11]
	void get_mindist(); // size[14]
};
