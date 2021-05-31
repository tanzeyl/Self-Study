from flask import Flask, render_template, url_for
from forms import RegistrationForm, LoginForm
app = Flask(__name__)

app.config["SECRET_KEY"] = "1e6efb89d38a82dc4ca9f434ad9b1e06"

posts = [{"author":"Tanzeel Khan",
		"title": "Blog Post 1",
		"content": "First post content",
		"date_posted": "April 20 2021"},

		{"author":"Jane Eyre",
		"title": "Blog Post 2",
		"content": "Second post content",
		"date_posted": "April 22 2021"}]

@app.route('/')
@app.route('/home')
def home():
	return render_template("home.html", posts= posts)

@app.route('/about')
def about():
	return render_template('about.html', title="About")

@app.route('/register', methods=['GET', 'POST'])
def register():
	form = RegistrationForm()
	return render_template("register.html", title="Register", form=form)

@app.route('/login')
def login():
	form = LoginForm()
	return render_template("login.html", title="Log In", form=form)

if __name__ == '__main__':
	app.run(debug=True)