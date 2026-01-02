# Manifestion_of_2026

Repository of daily LeetCode problems and recursion/backtracking snippets for 2026.

Structure
- `LeetCode_POTD/` — daily LeetCode problem write-ups and code.
	- `templates/` — markdown and C++ templates for new problem entries.
	- `January/` — files for January problems (one `*.md` and `*.cpp` per day).
- `Recursion_Backtracking/` — helpers and sample snippets.

How to add a new LeetCode entry
1. Copy `LeetCode_POTD/templates/leetcode_template.md` and update date, title, link, approach and complexity.
2. Copy `LeetCode_POTD/templates/cpp_template.cpp` to `LeetCode_POTD/<Month>/YYYY-MM-DD.cpp` and implement the solution.
3. Add a link to the code file inside the markdown under the "Code" section.
4. Run/compile the `.cpp` locally to sanity-check before committing.

Tips
- Keep each day's files focused: one problem per MD + one code file.
- Include complexity analysis and edge cases in the markdown for future revision.