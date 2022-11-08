#pragma once

namespace HR {
	enum class Position {
		Manager = 1,
		SeniorEngineer,
		Engineer,
	};
	struct Employee {
		char firstInitial;
		char lastInitial;
		int  employeeNumber;
		int  salary;
		Position position;
	};
}
