from scipy.stats import f

# Derajat kebebasan
df1 = 19
df2 = 9
alpha = 0.05

# Nilai kritis F
F_critical = f.ppf(1 - alpha, df1, df2)
print(f"Nilai Kritis F: {F_critical:.4f}")
