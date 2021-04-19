from flask import Flask, render_template
app = Flask(__name__)


@app.route("/")
def home():
    return "Hello World!"


app.run(debug=True)
