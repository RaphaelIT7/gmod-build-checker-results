// Generated header

class IVP_Mindist : public IVP_Mindist_Base
{
public:
	virtual ~IVP_Mindist() override; // vtable[0]
	virtual ~IVP_Mindist() override; // vtable[1]
	virtual void simulate_time_event(IVP_Environment *param_1) override; // vtable[2]
	virtual void mindist_rescue_push(); // vtable[6]
	virtual void is_recursive(); // vtable[7]
	virtual void exact_mindist_went_invalid(IVP_Mindist_Manager *param_1); // vtable[8]
	virtual void do_impact(); // vtable[9]

	void try_to_generate_managed_friction(IVP_Friction_System * *param_1, IVP_BOOL *param_2, IVP_Simulation_Unit *param_3, IVP_BOOL param_4); // size[17]
	void _GLOBAL__sub_I_try_to_generate_managed_friction(); // size[1]
	void try_to_generate_managed_friction(IVP_Friction_System * *param_1, IVP_BOOL *param_2, IVP_Simulation_Unit *param_3, IVP_BOOL param_4); // size[989]
	IVP_Mindist(IVP_Environment *param_1, IVP_Collision_Delegator *param_2); // size[71]
	void print(char *param_1); // size[21]
	void hull_manager_is_reset(float param_1, float param_2); // size[32]
	void create_cp_in_advance_pretension(IVP_Real_Object *param_1, float param_2); // size[485]
	void update_exact_mindist_events(IVP_BOOL param_1, IVP_MINDIST_EVENT_HINT param_2); // size[1256]
	void init_mindist(IVP_Real_Object *param_1, IVP_Real_Object *param_2, IVP_Compact_Edge *param_3, IVP_Compact_Edge *param_4); // size[544]
	void mindist_hull_limit_exceeded_event(float param_1); // size[1089]
	void get_synapse(int param_1); // size[15]
	void get_sorted_synapse(int param_1); // size[25]
	void get_coll_dist(); // size[43]
	void get_environment(); // size[14]
	void recalc_invalid_mindist(); // size[422]
	void recalc_mindist(); // size[422]
};
