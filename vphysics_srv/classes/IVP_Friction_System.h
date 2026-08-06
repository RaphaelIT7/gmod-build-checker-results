// Generated header

class IVP_Friction_System : public IVP_Controller_Dependent
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void do_simulation_controller(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual void ~IVP_Friction_System(); // vtable[7]
	virtual void ~IVP_Friction_System(); // vtable[8]

	void split_friction_system();
	void do_friction_system();
	void dist_added_update_pair_info();
	void calc_friction_forces();
	void ease_friction_forces();
	void delete_friction_distance();
	void apply_real_friction();
	void fusion_friction_systems();
	void add_fr_pair();
	void del_fr_pair();
	void get_pair_info_for_objs();
	void debug_check_system_consistency();
	void union_find_fr_sys();
	void split_friction_system();
	void print_all_dists();
	void clear_integrated_anti_energy();
	void remove_energy_gained_by_real_friction();
	void debug_fs_out_ascii();
	void core_is_found_in_pairs();
	void find_pair_of_cores();
	void get_num_supposed_active_frdists();
	void do_pushes_distance_keepers();
	void test_hole_fr_system_data();
	void reorder_mindists_for_complex();
	void exchange_friction_dists();
	void ivp_debug_fs_pointers();
	void bubble_sort_dists_importance();
	void core_is_terminal_in_fs();
	void static_fr_oversized_matrix_panic();
	void kinetic_energy_of_hole_frs();
	void confirm_complex_pushes();
	void undo_complex_pushes();
	void get_max_energy_gain();
	void do_friction_system();
	void debug_clean_tmp_info();
	void fs_recalc_all_contact_points();
	void dist_removed_update_pair_info();
	void remove_dist_from_system();
	void dist_added_update_pair_info();
	void add_dist_to_system();
	void add_core_to_system();
	void remove_core_from_system();
	void IVP_Friction_System();
};
