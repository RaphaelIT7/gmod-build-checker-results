// Generated header

class IVP_Mindist : public IVP_Mindist_Base
{
public:
	virtual void ~IVP_Mindist() override; // vtable[0]
	virtual void ~IVP_Mindist() override; // vtable[1]
	virtual void mindist_rescue_push(); // vtable[6]
	virtual void is_recursive(); // vtable[7]
	virtual void exact_mindist_went_invalid(); // vtable[8]
	virtual void do_impact(); // vtable[9]

	void try_to_generate_managed_friction();
	void _GLOBAL__sub_I_try_to_generate_managed_friction();
	void try_to_generate_managed_friction();
	void IVP_Mindist();
	void print();
	void hull_manager_is_reset();
	void create_cp_in_advance_pretension();
	void update_exact_mindist_events();
	void init_mindist();
	void mindist_hull_limit_exceeded_event();
	void get_synapse();
	void get_sorted_synapse();
	void get_coll_dist();
	void get_environment();
	void recalc_invalid_mindist();
	void recalc_mindist();
};
