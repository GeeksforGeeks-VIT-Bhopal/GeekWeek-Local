import pandas as pd
from pandas_profiling import ProfileReport

df= pd.read_csv('titanic.csv')

print(df)

#Generate a report
profile = ProfileReport(df, minimal=True)
profile.to_file(output_file='titanic.html')
