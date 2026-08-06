// Generated header

class IVP_Constraint_Solver_Car : public IVP_Controller_Dependent
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(IVP_Timeparam_1); // vtable[3]
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Constraint_Solver_Car(); // vtable[7]
	virtual ~IVP_Constraint_Solver_Car(); // vtable[8]

	IVP_Constraint_Solver_Car(IVP_COORDINATE_INDEXparam_1, IVP_COORDINATE_INDEXparam_2, IVP_COORDINATE_INDEXparam_3, IVP_BOOLparam_4); // size[29]
	void init_constraint_system(IVP_Environment *param_1, IVP_Real_Object *param_2, IVP_U_Vector *param_3, IVP_U_Vector *param_4); // size[17]
	IVP_Constraint_Solver_Car(IVP_COORDINATE_INDEXparam_1, IVP_COORDINATE_INDEXparam_2, IVP_COORDINATE_INDEXparam_3, IVP_BOOLparam_4); // size[136]
	void do_simulation_controller_rotation(IVP_Event_Sim *param_1, IVP_Core *param_2, IVP_U_Matrix *param_3); // size[737]
	void init_constraint_system(IVP_Environment *param_1, IVP_Real_Object *param_2, IVP_U_Vector *param_3, IVP_U_Vector *param_4); // size[685]
};
