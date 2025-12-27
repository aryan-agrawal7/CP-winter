def solve_cephalopod_math():
    lines = []
    print("Enter the worksheet (type 'end' to finish):")
    while True:
        try:
            inp = input()
            if inp.strip().lower() == "end":
                break
            lines.append(inp)
        except EOFError:
            break

    if not lines:
        return

    # 1. Pad all lines to the same length to preserve column alignment
    max_w = max(len(l) for l in lines)
    grid = [l.ljust(max_w) for l in lines]
    
    problems = []
    current_problem_cols = []

    # 2. Iterate through columns from LEFT to RIGHT first to group them
    # (We will process the groups right-to-left later)
    for c in range(max_w):
        # Get the vertical characters for this column
        col_chars = "".join(grid[r][c] for r in range(len(grid)))
        
        # If the column is entirely whitespace, it's a separator
        if not col_chars.strip():
            if current_problem_cols:
                problems.append(current_problem_cols)
                current_problem_cols = []
        else:
            current_problem_cols.append(col_chars)
    
    # Add the last problem if exists
    if current_problem_cols:
        problems.append(current_problem_cols)

    grand_total = 0

    # 3. Process problems from RIGHT to LEFT as per instructions
    for prob in reversed(problems):
        nums = []
        operator = None
        
        # Each 'col' in 'prob' is a string of characters from top to bottom
        for col in prob:
            # The operator is at the very bottom of the column
            op_char = col[-1]
            if op_char in '+*':
                operator = op_char
            
            # The rest of the characters (top to bottom) form the digits of one number
            digit_str = "".join(char for char in col[:-1] if char.isdigit())
            
            if digit_str:
                nums.append(int(digit_str))
        
        # 4. Calculate the result for this problem
        if not nums or not operator:
            continue
            
        if operator == '+':
            res = sum(nums)
        else: # operator == '*'
            res = 1
            for n in nums:
                res *= n
        
        grand_total += res

    print(f"Grand Total: {grand_total}")

solve_cephalopod_math()
