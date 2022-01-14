from sklearn import tree

features = [[2, 100], [6, 25], [1, 300] ,[1, 1000], [4, 100], [10, 100]]
labels =  [1, 2, 1, 1, 2, 2]

model = tree.DecisionTreeClassifier()
model.fit(features, labels)
n = model.predict([[6, 111]])

if n == 1:
  print("Race car")
elif n == 2:
  print("Family car")
