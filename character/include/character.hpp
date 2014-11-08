class Character{
	public:
		/*
			Constructor por omision.
		*/
		Character();
		/*
			Se obtiene las caracteristicas del personaje.
		*/
		virtual Skill getSkill();
		/*
			Se obtiene las pertenencias del personaje.
		*/
		virtual Inventory getInventory();
		/*
			Se obtiene la posicion relativa en el juego.
		*/
		virtual Position getPosition(); 
		/*
			Se obtiene el estado del personaje, entiendase como energia, vida, etc.
		*/
		virtual State getState();
		/*
			Eliminando el personaje de la memoria ram.
		*/
		~Character();

	protected:
		Skill 		* skill;
		Inventory 	* inventory;
		Position 	* position;
		State		* state;
};