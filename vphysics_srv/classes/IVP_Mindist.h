// Generated header

class IVP_Mindist : public IVP_Mindist_Base
{
public:
	virtual ~IVP_Mindist() override; // vtable[0]
	virtual ~IVP_Mindist() override; // vtable[1]
	virtual void simulate_time_event() override; // vtable[2]
	virtual void mindist_rescue_push(); // vtable[6]
	virtual void is_recursive(); // vtable[7]
	virtual void exact_mindist_went_invalid(); // vtable[8]
	virtual void do_impact(); // vtable[9]

	void try_to_generate_managed_friction(); // size[0]
	void _GLOBAL__sub_I_try_to_generate_managed_friction(); // size[0]
	void try_to_generate_managed_friction(); // size[0]
	IVP_Mindist(); // size[0]
	void print(); // size[0]
	void hull_manager_is_reset(); // size[0]
	void create_cp_in_advance_pretension(); // size[0]
	void update_exact_mindist_events(); // size[0]
	void init_mindist(); // size[0]
	void mindist_hull_limit_exceeded_event(); // size[0]
	void get_synapse(); // size[0]
	void get_sorted_synapse(); // size[0]
	void get_coll_dist(); // size[0]
	void get_environment(); // size[0]
	void recalc_invalid_mindist(); // size[0]
	void recalc_mindist(); // size[0]
};
