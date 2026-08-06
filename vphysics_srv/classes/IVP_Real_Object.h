// Generated header

class IVP_Real_Object : public IVP_Real_Object_Fast
{
public:
	virtual void ~IVP_Real_Object() override; // vtable[0]
	virtual void ~IVP_Real_Object() override; // vtable[1]
	virtual void set_new_quat_object_f_core(); // vtable[2]
	virtual void set_new_m_object_f_core(); // vtable[3]

	void IVP_Real_Object();
	void change_unmovable_flag();
	void convert_to_phantom();
	void _GLOBAL__sub_I_set_pinned();
	void change_fast_piling_allowed();
	void change_mass();
	void recompile_values_changed();
	void recompile_material_changed();
	void ensure_in_simulation_now();
	void add_listener_collision();
	void remove_listener_collision();
	void add_listener_object();
	void remove_listener_object();
	void insert_anchor();
	void remove_anchor();
	void update_exact_mindist_events_of_object();
	void revive_object_for_simulation();
	void IVP_Real_Object();
	void recalc_core_radius();
	void set_extra_radius();
	void reset_time();
	void recalc_invalid_mindists_of_object();
	void recalc_exact_mindists_of_object();
	void get_all_near_mindists();
	void recheck_collision_filter();
	void revive_nearest_objects_grow_fs();
	void force_grow_friction_system();
	void unlink_contact_points();
	void enable_collision_detection();
	void disable_simulation_list();
	void disable_simulation();
	void change_unmovable_flag();
	void set_new_surface_manager();
	void set_pinned();
	void unlink_contact_points_for_object();
	void clear_internal_references();
	void delete_silently();
	void delete_and_check_vicinity();
	void calc_m_core_f_object();
	void calc_at_matrix();
	void get_m_world_f_object_AT();
	void calc_at_quaternion();
	void get_quat_world_f_object_AT();
	void init_object_core();
	void get_collision_check_reference_count();
	void get_geom_center_world_space();
	void get_geom_radius();
	void get_geom_center_speed();
	void get_geom_center_speed_vec();
	void do_radar_checking();
	void convert_to_phantom();
	void beam_object_to_new_position();
	void async_add_speed_object_ws();
	void async_add_rot_speed_object_cs();
	void async_push_object_ws();
	void ensure_in_simulation();
	void get_first_anchor();
	void get_first_exact_synapse();
	void get_first_friction_synapse();
	void get_hull_manager();
	void get_surface_manager();
	void get_ov_element();
	void set_movement_state();
	void get_extra_radius();
	void to_nonconst();
	void get_core();
	void get_original_core();
	void get_movement_state();
	void set_is_debris();
	void is_collision_detection_enabled();
	void get_controller_phantom();
	void get_cache_object();
	void get_cache_object_no_lock();
};
