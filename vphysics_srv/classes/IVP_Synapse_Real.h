// Generated header

class IVP_Synapse_Real : public IVP_Synapse
{
public:
	virtual void ~IVP_Synapse_Real() override; // vtable[4]
	virtual void ~IVP_Synapse_Real() override; // vtable[5]
	virtual void print(); // vtable[6]

	void check_consistency_of_ledge();
	void update_synapse();
	void IVP_Synapse_Real();
	void init_synapse();
	void get_core();
	void get_hull_manager();
	void get_next();
	void get_prev();
	void get_mindist();
};
