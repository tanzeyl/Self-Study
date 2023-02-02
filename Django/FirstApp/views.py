from django.http import HttpResponse

response = "<h1>Hello World!</h1>"

def home(request):
  return HttpResponse(response)
