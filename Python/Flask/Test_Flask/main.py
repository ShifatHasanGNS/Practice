from datetime import datetime
from flask import Flask, render_template, request
from flask_mail import Mail
from flask_sqlalchemy import SQLAlchemy
import json


with open('config.json', 'r') as file:
    parameters = json.load(file)['parameters']

app = Flask(__name__)

app.config.update(
    MAIL_SERVER = 'smtp.gmail.com',
    MAIL_PORT = '465',
    MAIL_USE_SSL = True,
    MAIL_USERNAME = parameters['gmail_user'],
    MAIL_PASSWORD = parameters['gmail_password']
)
mail = Mail(app)

local_server = True
if(local_server):
    app.config['SQLALCHEMY_DATABASE_URI'] = parameters['local_uri']
else:
    app.config['SQLALCHEMY_DATABASE_URI'] = parameters['product_uri']

db = SQLAlchemy(app)

class Contacts(db.Model):
    S_No = db.Column(db.Integer, primary_key=True)
    Name = db.Column(db.String(80), unique=False, nullable=False)
    Email = db.Column(db.String(15), unique=True, nullable=False)
    Phone_Num = db.Column(db.String(120), unique=True, nullable=False)
    Message = db.Column(db.String(15), unique=False, nullable=False)
    Date = db.Column(db.String(20), unique=False, nullable=True)

@app.route('/')
def home():
    return render_template('index.html', parameters = parameters)

@app.route('/about')
def about():
    return render_template('about.html', parameters = parameters)

"""
@app.route('/post')
def post():
    return render_template('post.html', parameters = parameters)
"""

@app.route('/contact', methods=['GET', 'POST'])
def contact():
    if request.method == 'POST':
        name = request.form.get('Name')
        email = request.form.get('Name')
        phone_num = request.form.get('Phone_Num')
        message = request.form.get('Message')
        entry = Contacts(Name=name, Email=email, Phone_Num=phone_num, Message=message, Date=datetime.now())
        
        db.session.add(entry)
        db.session.commit()

        mail.send_message('New Message From '+name,
                            sender=email,
                            recipients = [parameters['gmail_user']],
                            body = message + "\n" + phone_num
                        )

    return render_template('contact.html', parameters = parameters)

app.run(debug=True)