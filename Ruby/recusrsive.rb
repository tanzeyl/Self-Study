def factorial(n)
  if n == 1
    n
  else
    n * factorial(n-1)
  end
end
puts factorial(5)
