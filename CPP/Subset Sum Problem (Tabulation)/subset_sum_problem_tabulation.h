/*
* Copyright 2018 Aman Mehara
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef MEHARA_SUBSET_SUM_PROBLEM_H_
#define MEHARA_SUBSET_SUM_PROBLEM_H_

#include <vector>

class SubsetSumProblem {

	std::vector<int> set_;

	bool SubsetSum(int elements, int sum);

public:

	SubsetSumProblem(std::vector<int>& set) {
		set_ = set;
	}

	bool SubsetSum(int sum);

};
#endif  // MEHARA_SUBSET_SUM_PROBLEM_H_