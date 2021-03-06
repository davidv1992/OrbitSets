#ifndef ONS_ORBIT_SINGLETON
#define ONS_ORBIT_SINGLETON

#include <ONS/singleton.h>

namespace ONS {

	template<typename T>
	class nomset;

	template<>
	class orbit<singleton> {
	public:
		orbit() {}
		int supportSize() const {
			return 0;
		}
		singleton getElementFromSeq(std::vector<rational> seq) const {
			(void)seq;
			return singleton();
		}
		std::vector<rational> getSeqFromElement(singleton s) const {
			(void) s;
			return std::vector<rational>(0);
		}
		orbit(singleton s) {
			(void) s;
		}
		singleton getElement() const {
			return singleton();
		}
		bool isElement(singleton s) const {
			(void) s;
			return true;
		}

		friend nomset<singleton> nomset_singleton();

	};

	inline bool operator==(orbit<singleton> a, orbit<singleton> b) {
		(void) a;
		(void) b;
		return true;
	}
	inline bool operator!=(orbit<singleton> a, orbit<singleton> b) {
		(void)a;
		(void)b;
		return false;
	}
	inline bool operator<(orbit<singleton> a, orbit<singleton> b) {
		(void) a;
		(void) b;
		return false;
	}
	inline bool operator>(orbit<singleton> a, orbit<singleton> b) {
		(void) a;
		(void) b;
		return false;
	}
	inline bool operator<=(orbit<singleton> a, orbit<singleton> b) {
		(void) a;
		(void) b;
		return true;
	}
	inline bool operator>=(orbit<singleton> a, orbit<singleton> b) {
		(void) a;
		(void) b;
		return true;
	}
}

#endif
