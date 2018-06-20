//インクルード
#include "string_trim.h"

//トリム
const std::string MyFunction::trim(std::string &target, const std::string &trim) {
	const size_t left = target.find_first_not_of(trim);
	const size_t right = target.find_last_not_of(trim);
	return target.substr(left, right - left + 1);
}
