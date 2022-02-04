import re

#Extracting Twitter Handles
text = '''
Follow our leader Elon musk on twitter here: https://twitter.com/elonmusk, more information
on Tesla's products can be found at https://www.tesla.com/. Also here are leading influencers
for tesla related news,
https://twitter.com/teslarati
https://twitter.com/dummy_tesla
https://twitter.com/dummy_2_tesla
'''
pattern = "https:\/\/twitter.com\/([^\n|,]+)"

matches = re.findall(pattern, text)
print("The Twitter Handles are:\n{}".format(matches))

#Extracting "Concentration of Risks"
text = '''
Concentration of Risk: Credit Risk
Financial instruments that potentially subject us to a concentration of credit risk consist of cash, cash equivalents, marketable securities,
restricted cash, accounts receivable, convertible note hedges, and interest rate swaps. Our cash balances are primarily invested in money market funds
or on deposit at high credit quality financial institutions in the U.S. These deposits are typically in excess of insured limits. As of September 30, 2021
and December 31, 2020, no entity represented 10% or more of our total accounts receivable balance. The risk of concentration for our convertible note
hedges and interest rate swaps is mitigated by transacting with several highly-rated multinational banks.
Concentration of Risk: Supply Risk
We are dependent on our suppliers, including single source suppliers, and the inability of these suppliers to deliver necessary components of our
products in a timely manner at prices, quality levels and volumes acceptable to us, or our inability to efficiently manage these components from these
suppliers, could have a material adverse effect on our business, prospects, financial condition and operating results.
'''
pattern = "Concentration of Risk: ([^\n]+)"
matches = re.findall(pattern, text)
print(f"Concentration of Risks are:\n{matches}")

#Extracting quarterly and semi-annual reports
text = '''
Tesla's gross cost of operating lease vehicles in FY2021 Q1 was $4.85 billion.
BMW's gross cost of operating vehicles in FY2021 S1 was $8 billion.
'''
pattern = "FY(\d{4} [Q,S][1-4])[^\$]+\$([0-9.]+)"
matches = re.findall(pattern, text)
print(f"The matches are:\n{matches}")

#Extracting Email
text = '''
bot: you ask lot of questions 😠  1235678912, abc@def.com
bot: here it is: (123)-567-8912, ghi@jkl.com
bot: yes, phone: 1235678912 email: mno@pqr.com
tanzeyl.khan@gmail.com
ktanzeel80@gmail.com
KHAN.TANZEEL@GMAIL.COM
tanzeelkhan_200211026.cse@geu.ac.in
'''
pattern = "[a-z0-9A-Z._]*@[a-zA-Z.]*\.[a-zA-Z]*"
matches = re.findall(pattern, text)
print(f"The E-Mails are\n{matches}")

#Extracting order numbers
text = '''
codebasics: My order 23546565463412889912 is having an issue, I was charged 300$ when online it says 280$
codebasics: I have a problem with my order number 412889916334523542
codebasics: Hello, I am having an issue with my order # 412887456459912
'''
pattern = "order[^\d]*(\d*)"
matches = re.findall(pattern, text)
print(f"The order numbers are:\n{matches}")
