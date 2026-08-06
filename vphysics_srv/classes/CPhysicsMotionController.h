// Generated header

class CPhysicsMotionController : public IVP_Controller_Independent, public IPhysicsMotionController
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void do_simulation_controller(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~CPhysicsMotionController(); // vtable[7]
	virtual ~CPhysicsMotionController(); // vtable[8]
	virtual void SetEventHandler(); // vtable[9]
	virtual void AttachObject(); // vtable[10]
	virtual void DetachObject(); // vtable[11]
	virtual void CountObjects(); // vtable[12]
	virtual void GetObjects(); // vtable[13]
	virtual void ClearObjects(); // vtable[14]
	virtual void WakeObjects(); // vtable[15]
	virtual void SetPriority(); // vtable[16]

	void SetEventHandler(); // size[0]
	void SetPriority(); // size[0]
	~CPhysicsMotionController(); // size[0]
	~CPhysicsMotionController(); // size[0]
	CPhysicsMotionController(); // size[0]
	void RemoveCore(); // size[0]
	void DetachObject(); // size[0]
	void InitFromTemplate(); // size[0]
	void AttachObject(); // size[0]
	void WriteToTemplate(); // size[0]
	void CountObjects(); // size[0]
	void GetObjects(); // size[0]
	void WakeObjects(); // size[0]
	void ClearObjects(); // size[0]
};
