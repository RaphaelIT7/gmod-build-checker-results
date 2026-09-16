// Generated header
// Estimated minimum size: 0xA4 (164) bytes, no debug info available

class CPhysicsMotionController : public IVP_Controller_Independent, public IPhysicsMotionController
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(IVP_Time param_1); // vtable[3]
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~CPhysicsMotionController(); // vtable[7]
	virtual ~CPhysicsMotionController(); // vtable[8]
	virtual void SetEventHandler(IMotionEvent *param_1); // vtable[9]
	virtual void AttachObject(IPhysicsObject *param_1, bool param_2); // vtable[10]
	virtual void DetachObject(IPhysicsObject *param_1); // vtable[11]
	virtual void CountObjects(); // vtable[12]
	virtual void GetObjects(IPhysicsObject * *param_1); // vtable[13]
	virtual void ClearObjects(); // vtable[14]
	virtual void WakeObjects(); // vtable[15]
	virtual void SetPriority(priority_t param_1); // vtable[16]
	virtual ~CPhysicsMotionController(); // vtable[0]
	virtual ~CPhysicsMotionController(); // vtable[1]
	virtual void SetEventHandler(IMotionEvent *param_1); // vtable[2]
	virtual void AttachObject(IPhysicsObject *param_1, bool param_2); // vtable[3]
	virtual void DetachObject(IPhysicsObject *param_1); // vtable[4]
	virtual void CountObjects(); // vtable[5]
	virtual void GetObjects(IPhysicsObject * *param_1); // vtable[6]
	virtual void ClearObjects(); // vtable[7]
	virtual void WakeObjects(); // vtable[8]
	virtual void SetPriority(priority_t param_1); // vtable[9]

	CPhysicsMotionController(IMotionEvent *param_1, CPhysicsEnvironment *param_2); // size[75]
	void RemoveCore(IVP_Core *param_1); // size[123]
	void InitFromTemplate(vphysics_save_motioncontroller_t *param_1); // size[75]
	void WriteToTemplate(vphysics_save_motioncontroller_t *param_1); // size[257]
};
